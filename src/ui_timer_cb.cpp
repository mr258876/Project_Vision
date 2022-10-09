#include <Arduino.h>
#include "ui.h"
#include "The_Vision_L_globals.h"

void cb_timer_ResinDispTimer(lv_timer_t *timer)
{
    if (nd._last_update_time > 0)
    {
        lv_label_set_text_fmt(ui_NoteUpdateTimeLabel, "%d分钟前更新", (int)((time(NULL) - nd._last_update_time) / 60));
    }
    else
    {
        lv_label_set_text(ui_NoteUpdateTimeLabel, "数据未初始化");
    }

    lv_label_set_text_fmt(ui_NoteResinLabel, "%d/%d", nd.resinRemain, nd.resinMax);
    lv_label_set_text_fmt(ui_NoteExpeditionsLabel, "%d/%d", nd.expeditionFinished, nd.expeditionOngoing);

    if (nd.homecoinMax < 1000)
    {
        lv_label_set_text_fmt(ui_NoteHomeCoinLabel, "%d/%d", nd.homecoinRemain, nd.homecoinMax);
    }
    else
    {
        lv_label_set_text_fmt(ui_NoteHomeCoinLabel, "%.1fK/%.1fK", (nd.homecoinRemain / 1000.0), (nd.homecoinMax / 1000.0));
    }

    if (nd.hasTransformer)
    {
        if (nd.transformerRecoverTime > 86400)
        {
            lv_label_set_text_fmt(ui_NoteTransformerLabel, "%d天", (int)(nd.transformerRecoverTime / 86400));
        }
        else if (nd.transformerRecoverTime > 3600)
        {
            lv_label_set_text_fmt(ui_NoteTransformerLabel, "%d小时", (int)(nd.transformerRecoverTime / 3600));
        }
        else if (nd.transformerRecoverTime > 60)
        {
            lv_label_set_text_fmt(ui_NoteTransformerLabel, "%d分钟", (int)(nd.transformerRecoverTime / 60));
        }
        else
        {
            lv_label_set_text(ui_NoteTransformerLabel, "已就绪");
        }
    }
    else
    {
        lv_label_set_text(ui_NoteTransformerLabel, "未解锁");
    }
}

void cb_timer_ClockTimer(lv_timer_t *timer)
{
    struct tm timeinfo;
    if (getLocalTime(&timeinfo))
    {
        lv_img_set_angle(ui_ClockHour, timeinfo.tm_hour % 12 * 300 + timeinfo.tm_min * 5 + 2250);
        lv_img_set_angle(ui_ClockMinute, timeinfo.tm_min * 60 + timeinfo.tm_sec + 450);

        int opaList[] = {0, 0, 0, 0};

        int dayMinute = timeinfo.tm_hour * 60 + timeinfo.tm_min;
        int timeSeg = floor(dayMinute / 360);
        opaList[timeSeg] = 255 - (255 / 360.0 * (dayMinute % 360));
        if (timeSeg == 3)
        {
            opaList[0] = (255 / 360.0 * (dayMinute % 360));
        }
        else
        {
            opaList[timeSeg + 1] = (255 / 360.0 * (dayMinute % 360));
        }

        lv_obj_set_style_img_opa(ui_ClockIconNight, opaList[0], LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_img_opa(ui_ClockIconMorning, opaList[1], LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_img_opa(ui_ClockIconNoon, opaList[2], LV_PART_MAIN | LV_STATE_DEFAULT);
        lv_obj_set_style_img_opa(ui_ClockIconDusk, opaList[3], LV_PART_MAIN | LV_STATE_DEFAULT);
    }
}