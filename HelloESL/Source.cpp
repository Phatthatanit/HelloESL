#include <WiFi.h>  
#include <time.h>    
#include <SPI.h>
#include <Wire.h>
#include <TridentTD_LineNotify.h>


int timezone = 7 * 3600;
int dst = 0;



void wifiSetup();
#define WiFi_STA_USERNAME "Mime"       
#define WiFi_STA_PASSWORD "0823268199dear" 
#define LINE_TOKEN  "4pu6OuJ9SUunv5LO1GgbFpyqX9JBUD91pjtyV93IX1Q"
#define Intervals 100
unsigned long long previousMillis_WiFi = 0;
int sec = 0, m = 0, h = 0;
unsigned long startMillis;
unsigned long currentMillis;
const unsigned long period = 1000;

void setup() {
    Serial.begin(115200);
    Serial.println(LINE.getVersion());
    wifiSetup();
    LINE.setToken(LINE_TOKEN);
    Serial.print("   CLOCK");

    configTime(timezone, dst, "pool.ntp.org", "time.nist.gov");
    Serial.print("\nWaiting for NTP...");
    while (!time(nullptr)) {
        Serial.print("*");

        startMillis = millis();
    }
}



void loop() {
    text();
    timee();


}
void timee() {

    time_t now = time(nullptr);
    struct tm* p_tm = localtime(&now);

    /* Serial.print(p_tm->tm_mday);
     Serial.print("/");
     Serial.print(p_tm->tm_mon + 1);
     Serial.print("/");
     Serial.print(p_tm->tm_year + 1900);*/

    Serial.print(" ");

    Serial.print(p_tm->tm_hour);
    h = p_tm->tm_hour;
    Serial.print(":");
    Serial.print(p_tm->tm_min);
    Serial.print(":");
    m = p_tm->tm_min;
    Serial.println(p_tm->tm_sec);
    sec = p_tm->tm_sec;
    delay(1000);
}
void text() {
    if (h == 6 && m == 13 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 6 && m == 28 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 6 && m == 49 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 7 && m == 4 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 7 && m == 22 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 7 && m == 37 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 8 && m == 59 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 9 && m == 14 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 10 && m == 55 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 11 && m == 10 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 13 && m == 3 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 13 && m == 18 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 14 && m == 22 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 14 && m == 37 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 15 && m == 57 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 16 && m == 12 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 16 && m == 54 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 17 && m == 9 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 18 && m == 30 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 18 && m == 45 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 19 && m == 47 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 20 && m == 02 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    else if (h == 20 && m == 25 && sec == 0) {
        Serial.println("15 min. left");
        while (sec != 0) delay(10);
        LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
    }
    else if (h == 20 && m == 40 && sec == 0) {
        Serial.println("arrived");
        while (sec != 0) delay(10);
        LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
    }
    /*else if (h==23&&m==0&&sec == 0) {
     Serial.println("15 min. left");
     while(sec != 0) delay(10);
     LINE.notify("เหลือเวลาอีก 15 นาที ก่อนที่รถไฟจะมาถึงสถานีพระจอมเกล้า");
   }
   else if (h==23&&m==15&&sec == 0) {
     Serial.println("arrived");
     while(sec != 0) delay(10);
     LINE.notify("รถไฟมาถึงสถานีพระจอมเกล้าแล้ว");
   }*/
    delay(10);
}
void wifiSetup()
{
    Serial.println();
    Serial.println();
    Serial.print("Connecting to ");
    Serial.println(WiFi_STA_USERNAME);

    //* WiFi Connection
    WiFi.mode(WIFI_STA);
    WiFi.begin(WiFi_STA_USERNAME, WiFi_STA_PASSWORD);

    Serial.print("Status: [");
    while (WiFi.status() != WL_CONNECTED)
    {
        //* Time Loop Uss Millis
        unsigned long currentMillis = millis(); //? Store Current time
        if (currentMillis - previousMillis_WiFi > Intervals)
        {
            previousMillis_WiFi = currentMillis; //? Save Current time
            Serial.print("=");
        }
    }
    Serial.println("] 100%");

    Serial.println("--- WiFi Connected ---");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());
}