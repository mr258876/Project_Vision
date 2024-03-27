#ifndef _UI_H_
#define _UI_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "conf.h"

#if __has_include("lvgl.h")
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

extern lv_obj_t * ui_StartupScreen;
extern lv_obj_t * ui_StartupTitle1;
extern lv_obj_t * ui_StartupTitle2;
extern lv_obj_t * ui_StartupLabel1;
extern lv_obj_t * ui_StartupLabel2;
extern lv_obj_t * ui_StartupSpinner;

extern lv_obj_t * ui_SettingScreen;
extern lv_obj_t * ui_SettingTitlePanel;
extern lv_obj_t * ui_SettingTitleLabel;
extern lv_obj_t * ui_SettingTitleBackButton;
extern lv_obj_t * ui_SettingTitleBackButtonImg;
extern lv_obj_t * ui_SettingSidePanel;
extern lv_obj_t * ui_SettingSideButton0;
extern lv_obj_t * ui_SettingSideButton0Label1;
extern lv_obj_t * ui_SettingSideButton1;
extern lv_obj_t * ui_SettingSideButton1Label;
extern lv_obj_t * ui_SettingSideButton2;
extern lv_obj_t * ui_SettingSideButton2Label;
extern lv_obj_t * ui_SettingSideButton3;
extern lv_obj_t * ui_SettingSideButton3Label;
extern lv_obj_t * ui_SettingInfoPanel0;
extern lv_obj_t * ui_SettingPanel0Label1;
extern lv_obj_t * ui_SettingPanel0SW1;
extern lv_obj_t * ui_SettingPanel0SW1Label1;
extern lv_obj_t * ui_SettingPanel0SW1Switch1;
extern lv_obj_t * ui_SettingPanel0Label2;
extern lv_obj_t * ui_SettingPanel0QR1;
extern lv_obj_t * ui_SettingPanel1Label1;
extern lv_obj_t * ui_SettingPanel1Button1;
extern lv_obj_t * ui_SettingPanel1Button1Label1;
extern lv_obj_t * ui_SettingPanel1Button1Button;
extern lv_obj_t * ui_SettingPanel1Button1ButtonLabel;
extern lv_obj_t * ui_SettingPanel1Label2;
extern lv_obj_t * ui_SettingPanel1Label3;
extern lv_obj_t * ui_SettingPanel1Label4;
extern lv_obj_t * ui_SettingPanel1Label5;
extern lv_obj_t * ui_SettingPanel1Label6;
extern lv_obj_t * ui_SettingInfoPanel2;
extern lv_obj_t * ui_SettingPanel2Label1;
extern lv_obj_t * ui_SettingPanel2SW1;
extern lv_obj_t * ui_SettingPanel2SW1Label1;
extern lv_obj_t * ui_SettingPanel2SW1Switch1;
extern lv_obj_t * ui_SettingPanel2SW2;
extern lv_obj_t * ui_SettingPanel2SW2Label1;
extern lv_obj_t * ui_SettingPanel2SW2Switch1;
extern lv_obj_t * ui_SettingPanel2DP1;
extern lv_obj_t * ui_SettingPanel2DP1Label1;
extern lv_obj_t * ui_SettingPanel2DP1Dropdown1;
extern lv_obj_t * ui_SettingPanel2Button1;
extern lv_obj_t * ui_SettingPanel2Button1Label1;
extern lv_obj_t * ui_SettingPanel2Button1Button;
extern lv_obj_t * ui_SettingPanel2Button1ButtonLabel;
extern lv_obj_t * ui_SettingInfoPanelAbout;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel1;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel2;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel3;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel4;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel5;
extern lv_obj_t * ui_SettingInfoPanelAboutLabel6;

extern void (*cb_ui_InfoScreen_back)();
extern lv_obj_t * ui_InfoScreen;
extern lv_obj_t * ui_InfoTitlePanel;
extern lv_obj_t * ui_InfoTitleLabel;
extern lv_obj_t * ui_InfoTitleBackButton;
extern lv_obj_t * ui_InfoTitleBackButtonImg;
extern lv_obj_t * ui_InfoPanel;

extern lv_obj_t * ui_VideoScreen;

extern lv_obj_t * ui_MenuScreen;
extern lv_obj_t * ui_MenuTitlePanel;
extern lv_obj_t * ui_MenutitleLabel;
extern lv_obj_t * ui_MenuButton1;
extern lv_obj_t * ui_MenuButton1Image;
extern lv_obj_t * ui_MenuButton1Label;
extern lv_obj_t * ui_MenuButton2;
extern lv_obj_t * ui_MenuButton2Image;
extern lv_obj_t * ui_MenuButton2Label;
extern lv_obj_t * ui_MenuButton3;
extern lv_obj_t * ui_MenuButton3Image;
extern lv_obj_t * ui_MenuButton3Label;
extern lv_obj_t * ui_MenuButton4;
extern lv_obj_t * ui_MenuButton4Image;
extern lv_obj_t * ui_MenuButton4Label;

extern lv_obj_t * ui_ResinScreen;
extern lv_obj_t * ui_DailyNotePanel;
extern lv_obj_t * ui_NoteResinLabel;
extern lv_obj_t * ui_NoteHomeCoinLabel;
extern lv_obj_t * ui_NoteExpeditionsLabel;
extern lv_obj_t * ui_NoteTransformerLabel;
extern lv_obj_t * ui_NoteResinImage;
extern lv_obj_t * ui_NoteHomeCoinImage;
extern lv_obj_t * ui_NoteExpeditionsImage;
extern lv_obj_t * ui_NoteTransformerImage;
extern lv_obj_t * ui_NoteUpdateTimeLabel;

extern lv_obj_t * ui_ClockScreen;
extern lv_obj_t * ui_Horoscpoe1;
extern lv_obj_t * ui_Horoscope2;
extern lv_obj_t * ui_Horoscope3;
extern lv_obj_t * ui_Horoscope4;
extern lv_obj_t * ui_ClockDial;
extern lv_obj_t * ui_ClockHour;
extern lv_obj_t * ui_ClockSecond;
extern lv_obj_t * ui_ClockMinute;
extern lv_obj_t * ui_ClockIconMorning;
extern lv_obj_t * ui_ClockIconNoon;
extern lv_obj_t * ui_ClockIconDusk;
extern lv_obj_t * ui_ClockIconNight;

extern lv_obj_t * ui_DigitalClockScreen;
extern lv_obj_t * ui_DigitalClockWeatherPanel;
extern lv_obj_t * ui_DigitalClockWeatherCityLabel;
extern lv_obj_t * ui_DigitalClockWeatherTempLabel;
extern lv_obj_t * ui_DigitalClockWeatherIcon;
extern lv_obj_t * ui_DigitalClockWeatherAirPanel;
extern lv_obj_t * ui_DigitalClockWeatherAirLabel;
extern lv_obj_t * ui_DigitalClockResinPanel;
extern lv_obj_t * ui_DigitalClockResinIcon1;
extern lv_obj_t * ui_DigitalClockResinLabel1;
extern lv_obj_t * ui_DigitalClockResinIcon2;
extern lv_obj_t * ui_DigitalClockResinLabel2;
extern lv_obj_t * ui_DigitalClockPanel;
extern lv_obj_t * ui_DigitalClockTimePanel;
extern lv_obj_t * ui_DigitalClockTimeLabelHourShadow;
extern lv_obj_t * ui_DigitalClockTimeLabelMinShadow;
extern lv_obj_t * ui_DigitalClockTimeLabelColonShadow;
extern lv_obj_t * ui_DigitalClockTimeLabelHour;
extern lv_obj_t * ui_DigitalClockTimeLabelMin;
extern lv_obj_t * ui_DigitalClockTimeLabelColon;
extern lv_obj_t * ui_DigitalClockWeekdayPanel;
extern lv_obj_t * ui_DigitalClockWeekdayLabelShadow;
extern lv_obj_t * ui_DigitalClockWeekdayLabel;
extern lv_obj_t * ui_DigitalClockDatePanel;
extern lv_obj_t * ui_DigitalClockDateLabelShadow;
extern lv_obj_t * ui_DigitalClockDateLabel;
extern lv_obj_t * ui_DigitalClockDateLabel;

extern lv_group_t * ui_group;

extern lv_timer_t *ui_timer_ResinDispTimer;
extern lv_timer_t *ui_timer_SettingDispTimer;
extern lv_timer_t *ui_timer_ClockTimerSecond;
extern lv_timer_t *ui_timer_ClockTimerMinute;
extern lv_timer_t *ui_timer_ClockTimerHour;
extern lv_timer_t *ui_timer_DigitalClockTimer;
extern lv_timer_t *ui_timer_DigitalClockResinTimer;
extern lv_timer_t *ui_timer_DigitalClockWeatherTimer;

extern bool flag_ui_DigitalClockNeedInit;
extern bool flag_ui_DigitalClockDispResin;

void cb_timer_ResinDispTimer(lv_timer_t *timer);
void cb_timer_SettingDispTimer(lv_timer_t *timer);
void cb_timer_ClockTimerSecond(lv_timer_t *timer);
void cb_timer_ClockTimerMinute(lv_timer_t *timer);
void cb_timer_ClockTimerHour(lv_timer_t *timer);
void cb_timer_DigitalClockTimer(lv_timer_t *timer);
void cb_timer_DigitalClockResinTimer(lv_timer_t *timer);
void cb_timer_DigitalClockWeatherTimer(lv_timer_t *timer);
void cb_timer_ScrDelTimer(lv_timer_t *timer);

void cb_hardwareSetup(lv_event_t * e);
void cb_startWifiReConfigure(lv_event_t * e);
void cb_stopWifiReConfigure(lv_event_t * e);

void cb_getDailyNoteFromResinScreen(lv_event_t * e);

void cb_leaveResinScreen(lv_event_t * e);
void cb_leaveClockScreen(lv_event_t * e);
void cb_leaveDigitalClockScreen(lv_event_t * e);
void cb_leaveSettingScreen(lv_event_t * e);
void cb_loadResinScreen(lv_event_t * e);
void cb_loadClock(lv_event_t * e);
void cb_switchClockScreen(lv_event_t * e);
void cb_loadClockScreen(lv_event_t * e);
void cb_loadDigitalClockScreen(lv_event_t * e);
void cb_loadSettingScreen(lv_event_t * e);

void cb_loadVideoScreen(lv_event_t * e);
void cb_loadWifiReconfigInfo(lv_event_t * e);
void cb_loadSDErrorInfo(lv_event_t * e);
void cb_loadPlaylistErrorInfo(lv_event_t * e);
void cb_loadProxCalibrationInfo(lv_event_t * e);

void cb_loadWifiConfigInfoStartupScreen(lv_event_t * e);

void ui_event_mbox(lv_event_t *e);

void cb_setAPIserver(bool val);
void cb_setAutoBright(bool val);
void cb_setUseAccel(bool val);
void cb_setLanguage(uint16_t val);
void cb_setProxThres(uint16_t val);

void aniDigitalClockLinear_Animation(lv_obj_t *TargetObject, int delay);

LV_IMG_DECLARE(ui_img_back);

LV_IMG_DECLARE(ui_img_menu_element);
LV_IMG_DECLARE(ui_img_menu_resin);
LV_IMG_DECLARE(ui_img_menu_clock);
LV_IMG_DECLARE(ui_img_menu_setting);

LV_IMG_DECLARE(ui_img_resin_resin);
LV_IMG_DECLARE(ui_img_resin_homecoin);
LV_IMG_DECLARE(ui_img_resin_expeditions);
LV_IMG_DECLARE(ui_img_resin_transformer);

LV_IMG_DECLARE(ui_img_clock_horoscopeBg);
LV_IMG_DECLARE(ui_img_clock_horoscope03);
LV_IMG_DECLARE(ui_img_clock_horoscope04);
LV_IMG_DECLARE(ui_img_clock_horoscope05);
LV_IMG_DECLARE(ui_img_clock_horoscope06);
LV_IMG_DECLARE(ui_img_clock_mask);
LV_IMG_DECLARE(ui_img_clock_minutehand);
LV_IMG_DECLARE(ui_img_clock_secondhand);
LV_IMG_DECLARE(ui_img_clock_hourhand);
LV_IMG_DECLARE(ui_img_clockicon_morning);
LV_IMG_DECLARE(ui_img_clockicon_noon);
LV_IMG_DECLARE(ui_img_clockicon_dusk);
LV_IMG_DECLARE(ui_img_clockicon_night);
LV_IMG_DECLARE(ui_img_weather_clear_sky);
LV_IMG_DECLARE(ui_img_weather_fog);
LV_IMG_DECLARE(ui_img_weather_freezing_drizzle);
LV_IMG_DECLARE(ui_img_weather_hail);
LV_IMG_DECLARE(ui_img_weather_haze);
LV_IMG_DECLARE(ui_img_weather_heavy_rain);
LV_IMG_DECLARE(ui_img_weather_heavy_snow_fall);
LV_IMG_DECLARE(ui_img_weather_moderate_rain);
LV_IMG_DECLARE(ui_img_weather_moderate_snow_fall);
LV_IMG_DECLARE(ui_img_weather_overcast);
LV_IMG_DECLARE(ui_img_weather_partly_cloudy);
LV_IMG_DECLARE(ui_img_weather_rain_showers);
LV_IMG_DECLARE(ui_img_weather_rainstorm);
LV_IMG_DECLARE(ui_img_weather_sand);
LV_IMG_DECLARE(ui_img_weather_sandstorm);
LV_IMG_DECLARE(ui_img_weather_sleet);
LV_IMG_DECLARE(ui_img_weather_slight_rain);
LV_IMG_DECLARE(ui_img_weather_slight_snow_fall);
LV_IMG_DECLARE(ui_img_weather_snow_showers);
LV_IMG_DECLARE(ui_img_weather_snowstorm);
LV_IMG_DECLARE(ui_img_weather_thunderstorm);

LV_FONT_DECLARE(ui_font_HanyiWenhei16ZhHans);
LV_FONT_DECLARE(ui_font_HanyiWenhei20ZhHans);
LV_FONT_DECLARE(ui_font_HanyiWenhei24ZhHans);
LV_FONT_DECLARE(ui_font_HanyiWenhei48ASCII);
LV_FONT_DECLARE(ui_font_FontAwesomeIcon24);
LV_FONT_DECLARE(ui_font_FontAwesomeIcon48);


void ui_init(void);

void ui_StartupScreen_screen_init();
void ui_SettingScreen_screen_init();
void ui_VideoScreen_screen_init();
void ui_MenuScreen_screen_init();
void ui_ResinScreen_screen_init();
void ui_InfoScreen_screen_init();
void ui_ClockScreen_screen_init();
void ui_DigitalClockScreen_screen_init();

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
