// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.4
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "ui_events.h"
// SCREEN: ui_Screen1
void ui_Screen1_screen_init(void);
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Calendar1;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Spinner1;
extern lv_obj_t * ui_timeLBL;
extern lv_obj_t * ui_Spinner2;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_Panel5;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_secondLBL;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Label8;
extern lv_obj_t * ui_Label9;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_Label10;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_Label12;
extern lv_obj_t * ui_statusLBL;
extern lv_obj_t * ui_ssidLBL;
extern lv_obj_t * ui_ipLBL;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_voltaheLBL;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
extern lv_obj_t * ui_Label13;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
extern lv_obj_t * ui_Label1;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_Label14;
extern lv_obj_t * ui_Image5;
// SCREEN: ui_Screen2
void ui_Screen2_screen_init(void);
extern lv_obj_t * ui_Screen2;
extern lv_obj_t * ui_Keyboard1;
void ui_event_TextArea2(lv_event_t * e);
extern lv_obj_t * ui_TextArea2;
void ui_event_TextArea1(lv_event_t * e);
extern lv_obj_t * ui_TextArea1;
void ui_event_BackButton(lv_event_t * e);
extern lv_obj_t * ui_BackButton;
void ui_event_SaveButton(lv_event_t * e);
extern lv_obj_t * ui_SaveButton;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_Label16;
extern lv_obj_t * ui_Label17;
extern lv_obj_t * ui_Label18;
extern lv_obj_t * ui_Label19;
extern lv_obj_t * ui_Label20;
extern lv_obj_t * ui_zoneLBL;
void ui_event_Button4(lv_event_t * e);
extern lv_obj_t * ui_Button4;
void ui_event_Button5(lv_event_t * e);
extern lv_obj_t * ui_Button5;
extern lv_obj_t * ui_Label22;
extern lv_obj_t * ui_Label23;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_brightness_png);    // assets\brightness.png
LV_IMG_DECLARE(ui_img_417548894);    // assets\full-screen-icon.png
LV_IMG_DECLARE(ui_img_357609662);    // assets\full-screen-icon2.png

LV_FONT_DECLARE(ui_font_font100b);
LV_FONT_DECLARE(ui_font_font110);
LV_FONT_DECLARE(ui_font_font114);

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
