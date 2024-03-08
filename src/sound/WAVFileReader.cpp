#include <FS.h>
#include <SPIFFS.h>
#include "sound/WAVFileReader.h"

#pragma pack(push, 1)
typedef struct
{
    // RIFF Header
    char riff_header[4]; // Contains "RIFF"
    int wav_size;        // Size of the wav portion of the file, which follows the first 8 bytes. File size - 8
    char wave_header[4]; // Contains "WAVE"

    // Format Header
    char fmt_header[4]; // Contains "fmt " (includes trailing space)
    int fmt_chunk_size; // Should be 16 for PCM
    short audio_format; // Should be 1 for PCM. 3 for IEEE Float
    short num_channels;
    int sample_rate;
    int byte_rate;          // Number of bytes per second. sample_rate * num_channels * Bytes Per Sample
    short sample_alignment; // num_channels * Bytes Per Sample
    short bit_depth;        // Number of bits per sample

    // Data
    char data_header[4]; // Contains "data"
    int data_bytes;      // Number of bytes in data. Number of samples * num_channels * sample byte size
    // uint8_t bytes[]; // Remainder of wave file is bytes
} wav_header_t;
#pragma pack(pop)

WAVFileReader::WAVFileReader(const char *file_name)
{
    if (!SPIFFS.exists(file_name))
    {
        ESP_LOGE("WAVFileReader", "Failed to open file! Have you uploaed the file system?");
        return;
    }
    m_file = SPIFFS.open(file_name, "r");
    // read the WAV header
    wav_header_t wav_header;
    m_file.read((uint8_t *)&wav_header, sizeof(wav_header_t));
    // sanity check the bit depth
    if (wav_header.bit_depth != 16)
    {
        ESP_LOGE("WAVFileReader", "ERROR: bit depth %d is not supported\n", wav_header.bit_depth);
    }

    ESP_LOGI("WAVFileReader", "fmt_chunk_size=%d, audio_format=%d, num_channels=%d, sample_rate=%d, sample_alignment=%d, bit_depth=%d, data_bytes=%d\n",
             wav_header.fmt_chunk_size, wav_header.audio_format, wav_header.num_channels, wav_header.sample_rate, wav_header.sample_alignment, wav_header.bit_depth, wav_header.data_bytes);

    m_num_channels = wav_header.num_channels;
    m_sample_rate = wav_header.sample_rate;
    m_circulation = false;
    isValid = true;
}

WAVFileReader::~WAVFileReader()
{
    m_file.close();
}

/*
    @brief  Generate audio frames for DACOutput.
    @param[0] frames: Pointer to Frame_t list to save the frames
    @param[1] number_frames: how many frames to read
    @return actual read frame in int
*/
int WAVFileReader::getFrames(Frame_t *frames, int number_frames)
{
    // fill the buffer with data from the file wrapping around if necessary
    for (int i = 0; i < number_frames; i++)
    {
        // if we've reached the end of the file then seek back to the beginning (after the header)
        if (m_file.available() == 0)
        {
            if (m_circulation)
                m_file.seek(44);
            else
                return i;
        }
        int16_t left;
        int16_t right;
        // read in the next sample to the left channel
        m_file.read((uint8_t *)(&left), sizeof(int16_t));
        // if we only have one channel duplicate the sample for the right channel
        if (m_num_channels == 1)
        {
            right = left;
        }
        else
        {
            // otherwise read in the right channel sample
            m_file.read((uint8_t *)(&right), sizeof(int16_t));
        }
        // we need unsigned bytes for the DAC, since we dont have negative voltage output
        int32_t sum = (((int32_t)left) + ((int32_t)right)) + 65536;
        int_fast8_t val = (32 - (sum / 4096.0)); // 2 channels * 1024
        if (val < 1)
        {
            val = 0;
        }
        frames[i].data = 0x5555555555555555 >> val; // generates a 5-bit output (each 01 is one bit)
                                                    // position of bits in frames[i] here does not mean anything
                                                    // take reference to the 1-bit music player DACs
    }
    return number_frames;
}