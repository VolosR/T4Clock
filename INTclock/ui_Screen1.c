// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"

void ui_Screen1_screen_init(void)
{
    ui_Screen1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Screen1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Screen1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Screen1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Calendar1 = lv_calendar_create(ui_Screen1);
    lv_calendar_set_today_date(ui_Calendar1, 2024, 5, 1);
    lv_calendar_set_showed_date(ui_Calendar1, 2024, 5);
    lv_obj_t * ui_Calendar1_header = lv_calendar_header_arrow_create(ui_Calendar1);
    lv_obj_set_width(ui_Calendar1, 306);
    lv_obj_set_height(ui_Calendar1, 304);
    lv_obj_set_x(ui_Calendar1, 124);
    lv_obj_set_y(ui_Calendar1, 64);
    lv_obj_set_align(ui_Calendar1, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Calendar1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Calendar1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Calendar1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Calendar1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel1, 60);
    lv_obj_set_height(ui_Panel1, 56);
    lv_obj_set_x(ui_Panel1, -245);
    lv_obj_set_y(ui_Panel1, -166);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel1, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x1C425B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner1 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Spinner1, 43);
    lv_obj_set_height(ui_Spinner1, 43);
    lv_obj_set_x(ui_Spinner1, 194);
    lv_obj_set_y(ui_Spinner1, -172);
    lv_obj_set_align(ui_Spinner1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner1, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_width(ui_Spinner1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_width(ui_Spinner1, 8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_timeLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_timeLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_timeLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_timeLBL, -74);
    lv_obj_set_y(ui_timeLBL, -148);
    lv_obj_set_align(ui_timeLBL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_timeLBL, "07:24");
    lv_obj_set_style_text_color(ui_timeLBL, lv_color_hex(0xE8E8E8), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_timeLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_timeLBL, &ui_font_font114, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Spinner2 = lv_spinner_create(ui_Screen1, 1000, 90);
    lv_obj_set_width(ui_Spinner2, 43);
    lv_obj_set_height(ui_Spinner2, 43);
    lv_obj_set_x(ui_Spinner2, 144);
    lv_obj_set_y(ui_Spinner2, -172);
    lv_obj_set_align(ui_Spinner2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Spinner2, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_arc_width(ui_Spinner2, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Spinner2, lv_color_hex(0xB6112D), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Spinner2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Spinner2, 8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label2, -242);
    lv_obj_set_y(ui_Label2, -124);
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "");
    lv_obj_set_style_text_color(ui_Label2, lv_color_hex(0xB8B8B5), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label2, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel2 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel2, 228);
    lv_obj_set_height(ui_Panel2, 4);
    lv_obj_set_x(ui_Panel2, -161);
    lv_obj_set_y(ui_Panel2, -84);
    lv_obj_set_align(ui_Panel2, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel2, lv_color_hex(0x1C425B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel2, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel4 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel4, 229);
    lv_obj_set_height(ui_Panel4, 88);
    lv_obj_set_x(ui_Panel4, -161);
    lv_obj_set_y(ui_Panel4, -1);
    lv_obj_set_align(ui_Panel4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel4, 2, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel4, lv_color_hex(0x260427), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Screen1);
    lv_obj_set_width(ui_Arc1, 103);
    lv_obj_set_height(ui_Arc1, 114);
    lv_obj_set_x(ui_Arc1, -224);
    lv_obj_set_y(ui_Arc1, 142);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc1, 0, 255);
    lv_arc_set_value(ui_Arc1, 125);
    lv_obj_set_style_arc_width(ui_Arc1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xE3BA3C), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 8, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0x0370B2), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 255, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Panel5 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel5, 215);
    lv_obj_set_height(ui_Panel5, 3);
    lv_obj_set_x(ui_Panel5, 169);
    lv_obj_set_y(ui_Panel5, -117);
    lv_obj_set_align(ui_Panel5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel5, lv_color_hex(0x1C425B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel5, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image1 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image1, &ui_img_brightness_png);
    lv_obj_set_width(ui_Image1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Image1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Image1, -224);
    lv_obj_set_y(ui_Image1, 133);
    lv_obj_set_align(ui_Image1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label3 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label3, -226);
    lv_obj_set_y(ui_Label3, 61);
    lv_obj_set_align(ui_Label3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label3, "Brightness:");
    lv_obj_set_style_text_color(ui_Label3, lv_color_hex(0xAEADAD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label3, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label4 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label4, -233);
    lv_obj_set_y(ui_Label4, -60);
    lv_obj_set_align(ui_Label4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label4, "Network:");
    lv_obj_set_style_text_color(ui_Label4, lv_color_hex(0xAEADAD), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label4, &lv_font_montserrat_18, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_secondLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_secondLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_secondLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_secondLBL, -245);
    lv_obj_set_y(ui_secondLBL, -166);
    lv_obj_set_align(ui_secondLBL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_secondLBL, "54");
    lv_obj_set_style_text_color(ui_secondLBL, lv_color_hex(0xF2F2F2), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_secondLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_secondLBL, &lv_font_montserrat_32, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label6 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label6, 217);
    lv_obj_set_y(ui_Label6, -131);
    lv_obj_set_align(ui_Label6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label6, "Volos Projects");
    lv_obj_set_style_text_color(ui_Label6, lv_color_hex(0xD4D4D4), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label6, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label7 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label7, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label7, 202);
    lv_obj_set_y(ui_Label7, -104);
    lv_obj_set_align(ui_Label7, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label7, "Where is my Sandwitch");
    lv_obj_set_style_text_color(ui_Label7, lv_color_hex(0x767676), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label7, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label8 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label8, -245);
    lv_obj_set_y(ui_Label8, -128);
    lv_obj_set_align(ui_Label8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label8, "Seconds");
    lv_obj_set_style_text_color(ui_Label8, lv_color_hex(0xBD9913), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label8, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label9 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label9, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label9, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label9, -163);
    lv_obj_set_y(ui_Label9, -100);
    lv_obj_set_align(ui_Label9, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label9, "Best ESP32 Internet Clock Ever");
    lv_obj_set_style_text_color(ui_Label9, lv_color_hex(0x6A6969), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label9, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label9, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel3 = lv_obj_create(ui_Screen1);
    lv_obj_set_width(ui_Panel3, 60);
    lv_obj_set_height(ui_Panel3, 3);
    lv_obj_set_x(ui_Panel3, -245);
    lv_obj_set_y(ui_Panel3, -116);
    lv_obj_set_align(ui_Panel3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xE3BA3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label10 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label10, 41);
    lv_obj_set_y(ui_Label10, 194);
    lv_label_set_text(ui_Label10, "WIFI:");
    lv_obj_set_style_text_color(ui_Label10, lv_color_hex(0xE3BA3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label10, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label11 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label11, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label11, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label11, -240);
    lv_obj_set_y(ui_Label11, 1);
    lv_obj_set_align(ui_Label11, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label11, "SSID:");
    lv_obj_set_style_text_color(ui_Label11, lv_color_hex(0xE3BA3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label11, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label12 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label12, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label12, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label12, -229);
    lv_obj_set_y(ui_Label12, 27);
    lv_obj_set_align(ui_Label12, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label12, "ADRESS:");
    lv_obj_set_style_text_color(ui_Label12, lv_color_hex(0xE3BA3C), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label12, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label12, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_statusLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_statusLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_statusLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_statusLBL, 114);
    lv_obj_set_y(ui_statusLBL, 194);
    lv_label_set_text(ui_statusLBL, "unknown");
    lv_obj_set_style_text_color(ui_statusLBL, lv_color_hex(0xBFBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_statusLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_statusLBL, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ssidLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_ssidLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ssidLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ssidLBL, 114);
    lv_obj_set_y(ui_ssidLBL, 219);
    lv_label_set_text(ui_ssidLBL, "");
    lv_obj_set_style_text_color(ui_ssidLBL, lv_color_hex(0xBFBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ssidLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ssidLBL, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ipLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_ipLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ipLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ipLBL, 114);
    lv_obj_set_y(ui_ipLBL, 244);
    lv_label_set_text(ui_ipLBL, "");
    lv_obj_set_style_text_color(ui_ipLBL, lv_color_hex(0xBFBFBF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_ipLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_ipLBL, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label5 = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, -248);
    lv_obj_set_y(ui_Label5, 196);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "Voltage:");
    lv_obj_set_style_text_color(ui_Label5, lv_color_hex(0x717272), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Label5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Label5, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_voltaheLBL = lv_label_create(ui_Screen1);
    lv_obj_set_width(ui_voltaheLBL, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_voltaheLBL, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_voltaheLBL, -191);
    lv_obj_set_y(ui_voltaheLBL, 197);
    lv_obj_set_align(ui_voltaheLBL, LV_ALIGN_CENTER);
    lv_label_set_text(ui_voltaheLBL, "3246 mV");
    lv_obj_set_style_text_color(ui_voltaheLBL, lv_color_hex(0x717272), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_voltaheLBL, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_voltaheLBL, &lv_font_montserrat_12, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button2 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button2, 100);
    lv_obj_set_height(ui_Button2, 45);
    lv_obj_set_x(ui_Button2, -95);
    lv_obj_set_y(ui_Button2, 72);
    lv_obj_set_align(ui_Button2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button2, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button2, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button2, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button2, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button2, lv_color_hex(0x1C425B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label13 = lv_label_create(ui_Button2);
    lv_obj_set_width(ui_Label13, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label13, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label13, -2);
    lv_obj_set_y(ui_Label13, 1);
    lv_obj_set_align(ui_Label13, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label13, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label13, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_label_set_text(ui_Label13, "Connect");
    lv_obj_set_style_text_font(ui_Label13, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button1 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button1, 100);
    lv_obj_set_height(ui_Button1, 45);
    lv_obj_set_x(ui_Button1, -95);
    lv_obj_set_y(ui_Button1, 126);
    lv_obj_set_align(ui_Button1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button1, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button1, lv_color_hex(0x1C425B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label1 = lv_label_create(ui_Button1);
    lv_obj_set_width(ui_Label1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label1, -2);
    lv_obj_set_y(ui_Label1, 1);
    lv_obj_set_align(ui_Label1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label1, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_label_set_text(ui_Label1, "Disconnect");
    lv_obj_set_style_text_font(ui_Label1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button3 = lv_btn_create(ui_Screen1);
    lv_obj_set_width(ui_Button3, 100);
    lv_obj_set_height(ui_Button3, 54);
    lv_obj_set_x(ui_Button3, -95);
    lv_obj_set_y(ui_Button3, 185);
    lv_obj_set_align(ui_Button3, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Button3, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Button3, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_add_flag(ui_Button3, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Button3, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button3, lv_color_hex(0x062E39), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label14 = lv_label_create(ui_Button3);
    lv_obj_set_width(ui_Label14, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label14, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label14, -2);
    lv_obj_set_y(ui_Label14, 1);
    lv_obj_set_align(ui_Label14, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Label14, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Label14, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_label_set_text(ui_Label14, "Setup WIFI");
    lv_obj_set_style_text_font(ui_Label14, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Image5 = lv_img_create(ui_Screen1);
    lv_img_set_src(ui_Image5, &ui_img_417548894);
    lv_obj_set_width(ui_Image5, LV_SIZE_CONTENT);   /// 48
    lv_obj_set_height(ui_Image5, LV_SIZE_CONTENT);    /// 48
    lv_obj_set_x(ui_Image5, 248);
    lv_obj_set_y(ui_Image5, -172);
    lv_obj_set_align(ui_Image5, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image5, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image5, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button2, ui_event_Button2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button1, ui_event_Button1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button3, ui_event_Button3, LV_EVENT_ALL, NULL);

}
