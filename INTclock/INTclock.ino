#include <LilyGo_AMOLED.h>
#include <EEPROM.h>
#include <ESP32Time.h>
#include "time.h"
#include <WiFi.h>
#include <LV_Helper.h>
#include "ui.h"

LilyGo_Class amoled;
int brightness=125;
int btemp;
int n=0;

ESP32Time rtc(0); 

int zone=0;
const char* ntpServer = "pool.ntp.org";
const long  gmtOffset_sec =3600;            
const int   daylightOffset_sec = 0; 
String ssid = "";
String password = "";

bool conected=0;
String wifiStatus="";
String ipStatus="";

void connectWifi()
{
   int n=0;
   bool con=0;

    WiFi.begin(ssid, password);
    while (!con) {
    delay(1000);
  
   if(WiFi.status() == WL_CONNECTED  || n>14)
   con=1;
    n++;
    if(n==15)
    ipStatus="wrong pass or SSID";
  }

}

void setTime()
{
  configTime(gmtOffset_sec*zone, daylightOffset_sec, ntpServer);
  struct tm timeinfo;
  if (getLocalTime(&timeinfo)){
    rtc.setTimeStruct(timeinfo); 
  }
lv_calendar_set_today_date(ui_Calendar1, rtc.getYear(), rtc.getMonth()+1, rtc.getDay());
   lv_calendar_set_showed_date(ui_Calendar1, rtc.getYear(), rtc.getMonth()+1);
  
}

void setup() {
   bool rslt = false;
      rslt = amoled.begin();
      amoled.setBrightness(brightness);
    byte l;
    EEPROM.begin(512);
 

    int duljina = EEPROM.read(0);
      int duljina2 = EEPROM.read(20);
      zone=EEPROM.read(40);
      if(zone>15) zone=0;

    // Inicijaliziraj String ssid s odgovarajućom duljinom
    ssid = "";
    password="";

    // Dohvati vrijednost Stringa ssid od adrese 1
    for (int i = 0; i < duljina; i++) {
        char karakter = EEPROM.read(1 + i);
        ssid += karakter;
    }

     for (int i = 0; i < duljina2; i++) {
        char karakter2 = EEPROM.read(21 + i);
        password += karakter2;
    }


    beginLvglHelper(amoled);
    ui_init();

}

void ui_event_Button4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        zone--; if(zone<-11) zone=14;
        _ui_label_set_property(ui_zoneLBL, _UI_LABEL_PROPERTY_TEXT, String(zone).c_str());
          
    }
}
void ui_event_Button5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        zone++; if(zone>14) zone=-11;
        _ui_label_set_property(ui_zoneLBL, _UI_LABEL_PROPERTY_TEXT, String(zone).c_str());
         
    }
}

void ui_event_SaveButton(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        ssid=lv_textarea_get_text(ui_TextArea2);
        password=lv_textarea_get_text(ui_TextArea1);
         
         int duljina = ssid.length();
         int duljina2= password.length();
         EEPROM.write(0, duljina);
         EEPROM.write(20, duljina2);
         EEPROM.write(40, zone);
         EEPROM.commit();

        for (int i = 0; i < duljina; i++) {
        EEPROM.write(1 + i, ssid[i]);
        EEPROM.commit();
         
        _ui_screen_change(&ui_Screen1, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_Screen1_screen_init);
    }

        for (int i = 0; i < duljina2; i++) {
        EEPROM.write(21 + i, password[i]);
        EEPROM.commit();
    }
    }
}

void ui_event_Button2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
      if(WiFi.status() != WL_CONNECTED)
       {connectWifi();
       setTime();}
    }
}

void ui_event_Button1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        WiFi.mode(WIFI_OFF);
    }
}

void ui_event_Button3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(&ui_Screen2, LV_SCR_LOAD_ANIM_NONE, 0, 0, &ui_Screen2_screen_init);
          zone=EEPROM.read(40);
          if(zone>15) zone=0;
        _ui_label_set_property(ui_zoneLBL, _UI_LABEL_PROPERTY_TEXT, String(zone).c_str());
    }
}



void loop() {

 lv_task_handler();
    delay(5);

    if(WiFi.status() == WL_CONNECTED)
   { wifiStatus="connected";
   ipStatus=WiFi.localIP().toString();}
    else
    {wifiStatus="disconnected";}

     

    if(n==10000)
    if(WiFi.status() == WL_CONNECTED)
    {setTime(); n=0;}

    String ss=String(n);
    brightness=lv_arc_get_value(ui_Arc1);
   
    if(brightness!=btemp){
    amoled.setBrightness(brightness);
    btemp=brightness;
    }

  _ui_label_set_property(ui_ssidLBL, _UI_LABEL_PROPERTY_TEXT, ssid.c_str());
  _ui_label_set_property(ui_ipLBL, _UI_LABEL_PROPERTY_TEXT, ipStatus.c_str());
  _ui_label_set_property(ui_statusLBL, _UI_LABEL_PROPERTY_TEXT, wifiStatus.c_str());
  _ui_label_set_property(ui_timeLBL, _UI_LABEL_PROPERTY_TEXT, rtc.getTime().substring(0,5).c_str());
  _ui_label_set_property(ui_secondLBL, _UI_LABEL_PROPERTY_TEXT, String(rtc.getSecond()).c_str());
   
   if(rtc.getHour()==0 && rtc.getSecond()==1)
   {
   lv_calendar_set_today_date(ui_Calendar1, rtc.getYear(), rtc.getMonth()+1, rtc.getDay());
   lv_calendar_set_showed_date(ui_Calendar1, rtc.getYear(), rtc.getMonth()+1);
   }
  
n++;
  
}