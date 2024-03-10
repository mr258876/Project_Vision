#include "The_Vision_L_globals.h"

/* Hardware Pinout */
uint8_t info_hwType = 0;
Pinout po;

/* Hoyolab Client */
HoyoverseClient hyc;
Notedata nd;

/* Weather */
WeatherProvider *wp = nullptr;
Weather_current_t weather;

/* Arduino FS */
fs::FS *sdfs = nullptr;

/* NVS */
Preferences prefs;

/* Playlist */
LinkedList<String> filePaths;

/* Mjpeg decoder */
MjpegClass mjpeg;

/* Runtime info */
int info_processUsingWifi = 0;
int info_wifiStatus = 255;
char info_ipv4Address[16] = "N/A";
char info_SSID[32] = "N/A";

bool info_setAPIstart = false;
int info_APIstatus = 0;
char info_APIaddress[23] = "http://127.0.0.1";

long info_static_resources_ver = 0;

bool info_isSquareLCD = true;
bool info_hasProx = false;
bool info_hasAccel = false;
bool info_hasSD = false;
char info_macAddress[13] = "";

bool info_timeSynced = false;
bool info_updatingResinData = false;
String info_deviceGuid = "";

/* Setting vars */
String setting_deviceName = "";

bool setting_useAccel = true;
bool setting_autoBright = true;
uint16_t setting_proxThres = 210;

uint8_t setting_screenDirection = 0;
uint8_t setting_screenBrightness = 127;

bool setting_soundMuted = false;
uint8_t setting_soundVolume = 75;

unsigned long setting_resinSyncPeriod = 1800000000;
unsigned long setting_weatherSyncPeriod = 1800000000;

bool setting_useDigitalClock = false;

int setting_weatherProvider = -1;

String setting_timeZone = "";

bool setting_autoUpdate = false;
unsigned int setting_updateChannel = 0;

uint8_t setting_defaultScreen = 1;

uint8_t setting_wirelessMode = 0;

/* Bluetooth */
String setting_ble_cts_peer = "";
uint8_t setting_ble_cts_peer_type = 0;