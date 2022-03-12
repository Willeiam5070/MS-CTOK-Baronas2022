#include <Arduino.h>
#include <SPI.h>
#include <Wire.h>
#include <DS3231.h>
#include <EEPROM.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106_ESP32.h>
#include <Adafruit_PWMServoDriver.h>
#include <Servo.h>
#define LCD_ADDRESS 0x3C
#define OLED_RESET     -1
Adafruit_SH1106 lcd(-1, -31);
Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();
#define S0 14
#define S1 27
#define S2 15
#define S3 13
#define PIN_ADC_BUTTON_L 36
#define PIN_ADC_BUTTON_R 39
#define OUT 33
#define LED 12

RTClib rtc;
unsigned long timee;
char month[12][4] = {
  "Jan",
  "Feb",
  "Mar",
  "Apr",
  "May",
  "Jun",
  "Jul",
  "Aug",
  "Sep",
  "Okt",
  "Nov",
  "Dec"
};

unsigned int high[14], low[14], mid[14];
int counter = 0;
int cntr = 0;
int find_error[100];
int warna_garis[100];
int kp_counter[100];
int kd_counter[100];
int speed_1[100];
int timer_normal[100];
int speed_2[100];
int trig_sensor[100];
int trig_mode[100];
int break_reading[100];
int mode_move[100];
int speed_left[100];
int speed_right[100];
int delay_move[100];
int delay_break[100];
int dbreak_mode[100];
int stop_ct = 1;
int sensitive[100];

byte cp[100];

//=========================== PEMBACAAN BATTERY ========================//

#define pinVM 35

float voltmeter() {
  float voltmax = 3.21, involtmax = 20.0;
  unsigned long adcvolt = 0;
  for (int a = 0; a < 100; a++) {
    adcvolt += analogRead(pinVM);
  }
  adcvolt /= 100;
  float Vout = (adcvolt * 6.38) / 4095.00;
  float Vin = Vout / 0.1570;
  return Vin;
}

unsigned int adc[14];

//============================= BACA TOMBOL ============================//
#define UPL 2
#define OKL 4
#define DWNL 1
#define UPR 6
#define OKR 8
#define DWNR 5
bool tombol(byte btn) {
  if (btn < 5) {
    if (btn == analogRead(PIN_ADC_BUTTON_L) / 1000) return 1;
    else return 0;
  }
  else {
    if (btn - 4 == analogRead(PIN_ADC_BUTTON_R) / 1000) return 1;
    else return 0;
  }
}

//========================== Convert to Digital ========================//
#define hitam 0
#define putih 1
#define auto 2
int binary;
int black, white;
unsigned int analysis(byte lineColor, int sensitiv) {
  unsigned long output = 0;
  int nilaiplus;
  black = 0, white = 0;
  for (int a = 0; a < 14; a++) {
    digitalWrite(S0, a + 1 & 0b0001);
    digitalWrite(S1, a + 1 & 0b0010);
    digitalWrite(S2, a + 1 & 0b0100);
    digitalWrite(S3, a + 1 & 0b1000);
    adc[13 - a] = analogRead(OUT);
    if (adc[a] > (mid[a] + sensitiv)) {
      nilaiplus = 1;
      black++;
      for (int b = 0; b < 13 - a; b++) {
        nilaiplus *= 2;
      }
      output += nilaiplus;
    }
    else white++;
  }
  if ((lineColor == 1) || (lineColor == 2 && black > white)) output = 16383 - output;
  binary = output;
  return output;
}

//============================ PID =====================================//
int error = 0;
int tce(bool lineColor, int sensitiv) {
  switch (analysis(lineColor, sensitiv)) {
    case 0b00000000000001: error = -14;    break;
    case 0b00000000000011: error = -12;    break;
    case 0b00000000000111: error = -12;    break;
    case 0b00000000000010: error = -10;    break;
    case 0b00000000000110: error =  -9;    break;
    case 0b00000000001110: error =  -9;    break;
    case 0b00000000000100: error =  -8;    break;
    case 0b00000000001100: error =  -7;    break;
    case 0b00000000011100: error =  -7;    break;
    case 0b00000000001000: error =  -6;    break;
    case 0b00000000011000: error =  -5;    break;
    case 0b00000000111000: error =  -5;    break;
    case 0b00000000010000: error =  -4;    break;
    case 0b00000000110000: error =  -3;    break;
    case 0b00000001110000: error =  -3;    break;
    case 0b00000000100000: error =  -2;    break;
    case 0b00000001100000: error =  -1;    break;
    case 0b00000011100000: error =  -1;    break;

    case 0b00000011000000: error =   0;    break;
    case 0b00000111000000: error =   1;    break;
    case 0b00000110000000: error =   1;    break;
    case 0b00000100000000: error =   2;    break;
    case 0b00001110000000: error =   3;    break;
    case 0b00001100000000: error =   3;    break;
    case 0b00001000000000: error =   4;    break;
    case 0b00011100000000: error =   5;    break;
    case 0b00011000000000: error =   5;    break;
    case 0b00010000000000: error =   6;    break;
    case 0b00111000000000: error =   7;    break;
    case 0b00110000000000: error =   7;    break;
    case 0b00100000000000: error =   8;    break;
    case 0b01110000000000: error =   9;    break;
    case 0b01100000000000: error =   9;    break;
    case 0b01000000000000: error =  10;    break;
    case 0b11100000000000: error =  12;    break;
    case 0b11000000000000: error =  12;    break;
    case 0b10000000000000: error =  14;    break;
    default : error = 0; break;
  }
  return error;
}
int tki(bool lineColor, int sensitiv) {
  switch (analysis(lineColor, sensitiv)) {
    case 0b00000000000001: error = -14;    break;
    case 0b00000000000011: error = -12;    break;
    case 0b00000000000111: error = -12;    break;
    case 0b00000000000010: error = -10;    break;
    case 0b00000000000110: error =  -9;    break;
    case 0b00000000001110: error =  -9;    break;
    case 0b00000000000100: error =  -8;    break;
    case 0b00000000001100: error =  -7;    break;
    case 0b00000000011100: error =  -7;    break;
    case 0b00000000001000: error =  -6;    break;
    case 0b00000000011000: error =  -5;    break;
    case 0b00000000111000: error =  -5;    break;
    case 0b00000000010000: error =  -4;    break;
    case 0b00000000110000: error =  -3;    break;
    case 0b00000001110000: error =  -3;    break;
    case 0b00000000100000: error =  -2;    break;
    case 0b00000001100000: error =  -1;    break;
    case 0b00000011100000: error =  -1;    break;

    case 0b00000011000000: error =   0;    break;
    case 0b00000111000000: error =   1;    break;
    case 0b00000110000000: error =   1;    break;
    case 0b00000100000000: error =   2;    break;
    case 0b00001110000000: error =   3;    break;
    case 0b00001100000000: error =   3;    break;
    case 0b00001000000000: error =   4;    break;
    case 0b00011100000000: error =   5;    break;
    case 0b00011000000000: error =   5;    break;
    case 0b00010000000000: error =   6;    break;
    case 0b00111000000000: error =   7;    break;
    case 0b00110000000000: error =   7;    break;
    case 0b00100000000000: error =   8;    break;
    case 0b01110000000000: error =   9;    break;
    case 0b01100000000000: error =   9;    break;
    case 0b01000000000000: error =  10;    break;
    case 0b11100000000000: error =  12;    break;
    case 0b11000000000000: error =  12;    break;
    case 0b10000000000000: error =  14;    break;
    case 0b00000000000000: error =  14;    break;
    default : error = 0; break;
  }
  return error;
} int tka(bool lineColor, int sensitiv) {
  switch (analysis(lineColor, sensitiv)) {
    case 0b00000000000000: error = -14;    break;
    case 0b00000000000001: error = -14;    break;
    case 0b00000000000011: error = -12;    break;
    case 0b00000000000111: error = -12;    break;
    case 0b00000000000010: error = -10;    break;
    case 0b00000000000110: error =  -9;    break;
    case 0b00000000001110: error =  -9;    break;
    case 0b00000000000100: error =  -8;    break;
    case 0b00000000001100: error =  -7;    break;
    case 0b00000000011100: error =  -7;    break;
    case 0b00000000001000: error =  -6;    break;
    case 0b00000000011000: error =  -5;    break;
    case 0b00000000111000: error =  -5;    break;
    case 0b00000000010000: error =  -4;    break;
    case 0b00000000110000: error =  -3;    break;
    case 0b00000001110000: error =  -3;    break;
    case 0b00000000100000: error =  -2;    break;
    case 0b00000001100000: error =  -1;    break;
    case 0b00000011100000: error =  -1;    break;

    case 0b00000011000000: error =   0;    break;
    case 0b00000111000000: error =   1;    break;
    case 0b00000110000000: error =   1;    break;
    case 0b00000100000000: error =   2;    break;
    case 0b00001110000000: error =   3;    break;
    case 0b00001100000000: error =   3;    break;
    case 0b00001000000000: error =   4;    break;
    case 0b00011100000000: error =   5;    break;
    case 0b00011000000000: error =   5;    break;
    case 0b00010000000000: error =   6;    break;
    case 0b00111000000000: error =   7;    break;
    case 0b00110000000000: error =   7;    break;
    case 0b00100000000000: error =   8;    break;
    case 0b01110000000000: error =   9;    break;
    case 0b01100000000000: error =   9;    break;
    case 0b01000000000000: error =  10;    break;
    case 0b11100000000000: error =  12;    break;
    case 0b11000000000000: error =  12;    break;
    case 0b10000000000000: error =  14;    break;
    default : error = 0; break;
  }
  return error;
}

//========================== KONFIGURASI MOTOR =========================//
#define pin1 4
#define pin2 16
#define pin3 18
#define pin4 26

void motor(int speedL, int speedR) {
  if (speedL > 0) {
    digitalWrite(pin2, LOW);
    ledcWrite(0, speedL);
  }
  else if (speedL < 0) {
    digitalWrite(pin2, HIGH);
    ledcWrite(0, 255 - (speedL * -1));
  }
  else {
    digitalWrite(pin2, LOW);
    ledcWrite(0, 0);
  }

  if (speedR > 0) {
    digitalWrite(pin4, LOW);
    ledcWrite(1, speedR);
  }
  else if (speedR < 0) {
    digitalWrite(pin4, HIGH);
    ledcWrite(1, 255 - (speedR * -1));
  }
  else {
    digitalWrite(pin4, LOW);
    ledcWrite(1, 0);
  }
}

//============================= MODE NORMAL ============================//

//double P = 0;
//double D = 0;
//double lastError = 0;
//unsigned long lastProcess = 0;

//void mode_normal(byte plan, bool garis, byte spd, byte kp, byte kd, byte dt, int sensitiv) {
//  unsigned long current_millis = millis();
//
//  if (current_millis -  lastProcess > dt) {
//    double deltaTime = (current_millis - lastProcess) / 1000.000;
//    lastProcess = millis();
//
//    if      (plan == 0) tce(garis, sensitiv);
//    else if (plan == 5) l3mm(garis, sensitiv);
//    P = error * (double) kp;
//    D = ((error - lastError) * (double) kd ) / deltaTime;
//    lastError = error;
//
//    int pidOut = (int)P + (int)D;
//    int mleft = spd - pidOut;
//    int mright = spd + pidOut;
//
//    if (mleft < -255)  mleft = -255;
//    if (mleft > 255)   mleft = 255;
//    if (mright < -255) mright = -255;
//    if (mright > 255)  mright = 255;
//    motor(mleft, mright);
//  }
//}
int last_error;
void mode_normal(byte plan, bool garis, byte spd, int kp, int kd, int sensitiv) {
  if      (plan == 0) tce(garis, sensitiv);
  else if (plan == 1) tki(garis, sensitiv);
  else if (plan == 2) tka(garis, sensitiv);

  int out_p = (int)error * kp;
  int out_d = (int)(error - last_error) * kd;
  last_error = error;
  int LOUT = (int)spd - out_p - out_d;
  int ROUT = (int)spd + out_p + out_d;

  if (LOUT > 255) LOUT = 255;
  if (LOUT < -255) LOUT = -255;
  if (ROUT > 255) ROUT = 255;
  if (ROUT < -255) ROUT = -255;

  motor(LOUT, ROUT);
}

//============================== KALIBRASI ============================//
byte crsr = 0, chp = 99, ct = 1, stp = 1, plan = 1, btnctr, movespd;
bool lastupl, lastdwnl;

void calibration() {
  lcd.clearDisplay();
  lcd.setCursor(0, 0);
  lcd.print("CALIBRATING");
  lcd.display();
  while (tombol(OKL));
  delay(100);
  for (int a = 0; a < 14; a++) {
    high[a] = 0;
    low[a] = 4096;
  }
  while (!tombol(OKL)) {
    for (int a = 0; a < 14; a++) {
      digitalWrite(S0, a + 1 & 0b0001);
      digitalWrite(S1, a + 1 & 0b0010);
      digitalWrite(S2, a + 1 & 0b0100);
      digitalWrite(S3, a + 1 & 0b1000);
      adc[13 - a] = analogRead(OUT);
      if (adc[a] > high[a]) high[a] = adc[a];
      if (adc[a] < low[a]) low[a] = adc[a];
    }
  }
  digitalWrite(LED, LOW);
  delay(50);
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);
  digitalWrite(LED, HIGH);
  delay(50);
  digitalWrite(LED, LOW);
  delay(50);
  lcd.clearDisplay();
  lcd.setCursor(0, 0);
  lcd.print("SAVING");
  lcd.display();
  for (int a = 0; a < 14; a++) {
    mid[a] = ((high[a] - low[a]) / 2) + low[a];
    EEPROM.write(a * 2, mid[a] & 255);
    EEPROM.write(a * 2 + 1, mid[a] >> 8);
  }
  crsr = 0;
  EEPROM.write(30, crsr);
  EEPROM.commit();
  while (tombol(OKL));
}


//============================== HALAMAN HOME ==========================//
byte lastplan = 0;
void home() {
  while (1) {
    if (crsr != 4)lastplan = plan;
    if (lastupl != tombol(UPL) && tombol(UPL)) {
      if (crsr == 0)crsr = 6;
      EEPROM.write(30, 3);
      EEPROM.commit();
      crsr--;
      EEPROM.write(30, crsr);
      EEPROM.commit();
      if (plan != lastplan)ESP.restart();
    }
    else if (lastdwnl != tombol(DWNL) && tombol(DWNL)) {
      crsr++;
      if (crsr >= 6)crsr = 0;
      EEPROM.write(30, crsr);
      EEPROM.commit();
      if (plan != lastplan)ESP.restart();
    }
    lastupl = tombol(UPL);
    lastdwnl = tombol(DWNL);

    if (btnctr <= 5) movespd = 1;
    else if (btnctr <= 15)movespd = 5;
    else if (btnctr <= 30)movespd = 10;
    if (tombol(UPR)) {
      if (crsr == 1) ct += movespd;
      if (crsr == 2) chp += movespd;
      if (crsr == 3) stp += movespd;
      if (crsr == 4) plan += movespd;
      if (chp >= 100)chp = 0;
      if (ct >= 100)ct = 0;
      if (stp >= 100)stp = 0;
      if (plan >= 100)plan = 0;
      btnctr++;
    }
    else if (tombol(DWNR)) {
      if (crsr == 1) {
        if (ct == 0 || ct - movespd < 0)ct = 100;
        ct -= movespd;
      }
      if (crsr == 2) {
        if (chp == 0 || chp - movespd < 0)chp = 100;
        chp -= movespd;
      }
      if (crsr == 3) {
        if (stp == 0 || stp - movespd < 0)stp = 100;
        stp -= movespd;
      }
      if (crsr == 4) {
        if (plan == 0 || plan - movespd < 0)plan = 100;
        plan -= movespd;
      }
      btnctr++;
    }
    else if (!tombol(DWNR) && !tombol(UPR) && btnctr != 0) {
      EEPROM.write(31, chp);
      EEPROM.write(32, ct);
      EEPROM.write(33, stp);
      EEPROM.write(34, plan);
      EEPROM.commit();
      btnctr = 0;
    }

    DateTime now = rtc.now();
    lcd.clearDisplay();
    lcd.setCursor(2, 0);
    lcd.print(now.hour() < 10 ? "0" : "");
    lcd.print(now.hour());
    lcd.print(':');
    lcd.print(now.minute() < 10 ? "0" : "");
    lcd.print(now.minute());
    lcd.setCursor(60, 0);
    lcd.print(now.day() < 10 ? "0" : "");
    lcd.print(now.day());
    lcd.print(' ');
    lcd.print(month[now.month() - 1]);
    lcd.print(' ');
    lcd.print(now.year());
    if (crsr == 5) lcd.fillRoundRect(0, 12, 128, 17, 2, WHITE);
    for (int a = 0; a < 14; a++) {
      digitalWrite(S0, a + 1 & 0b0001);
      digitalWrite(S1, a + 1 & 0b0010);
      digitalWrite(S2, a + 1 & 0b0100);
      digitalWrite(S3, a + 1 & 0b1000);
      adc[13 - a] = analogRead(OUT);
      if (crsr == 5)lcd.drawRect(2 + 9 * a, 14 + (adc[a] / 340), 6, 13 - (adc[a] / 340), BLACK);
      else lcd.drawRect(2 + 9 * a, 14 + (adc[a] / 340), 6, 13 - (adc[a] / 340), WHITE);
    }
    if (crsr == 0) {
      lcd.fillRoundRect(0, 30, 35, 11, 3, WHITE);
      lcd.setTextColor(BLACK);
      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.setTextColor(WHITE);
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
    }
    else if (crsr == 1) {

      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.fillRoundRect(0, 42, 60, 11, 3, WHITE);
      lcd.setTextColor(BLACK);
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.setTextColor(WHITE);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
    }
    else if (crsr == 2) {
      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.fillRoundRect(0, 54, 60, 11, 3, WHITE);
      lcd.setTextColor(BLACK);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.setTextColor(WHITE);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
    }
    else if (crsr == 3) {
      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.fillRoundRect(68, 30, 60, 11, 3, WHITE);
      lcd.setTextColor(BLACK);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.setTextColor(WHITE);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
    }
    else if (crsr == 4) {
      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.fillRoundRect(68, 42, 60, 11, 3, WHITE);
      lcd.setTextColor(BLACK);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
      lcd.setTextColor(WHITE);
    }
    else if (crsr == 5) {
      lcd.setCursor(2, 32);
      lcd.print("START");
      lcd.setCursor(2, 44);
      lcd.print("CT   : ");
      lcd.print(ct < 10 ? " " : "");
      lcd.print(ct);
      lcd.setCursor(2, 56);
      lcd.print("CP   : ");
      lcd.print(chp < 10 ? " " : "");
      lcd.print(chp);
      lcd.setCursor(70, 32);
      lcd.print("STOP : ");
      lcd.print(stp < 10 ? " " : "");
      lcd.print(stp);
      lcd.setCursor(70, 44);
      lcd.print("PLAN : ");
      lcd.print(plan < 10 ? " " : "");
      lcd.print(plan);
    }
    float volt = voltmeter();
    if (volt >= 10) {
      lcd.setCursor(70, 56);
      lcd.print(volt < 10.00 ? " " : "");
      lcd.print(String(volt, 2));
      lcd.print(" v");
    }
    else {
      lcd.setCursor(105, 56);
      lcd.print("USB");
    }
    lcd.display();

    if (tombol(OKL)) {
      if (crsr == 0) {
        counter = 0;
        break;
      }
      else if (crsr == 1) {
        counter = ct;
        break;
      }
      else if (crsr == 2) {
        counter = cp[chp];
        break;
      }
      else if (crsr == 3) {
        crsr = 0;
        EEPROM.write(30, crsr);
        EEPROM.commit();
        while (tombol(OKL));
      }
      else if (crsr == 4) {
        crsr = 0;
        EEPROM.write(30, crsr);
        EEPROM.commit();
        while (tombol(OKL));
        if (plan != lastplan)ESP.restart();
      }
      if (crsr == 5) calibration();
    }
    if (tombol(OKR)) {
      if (crsr == 3) {
        crsr = 0;
        EEPROM.write(30, crsr);
        EEPROM.commit();
      }
      else if (crsr == 4) {
        crsr = 0;
        EEPROM.write(30, crsr);
        EEPROM.commit();
        if (plan != lastplan)ESP.restart();
      }
    }
  }
}

//======================================= MODE COUNTER =======================================//

#define dan   0
#define atau  1
#define free  2
#define pid   1
#define stop  0
#define pick  5
#define pickp 6
#define drop  7
#define dropp 9
#define fire  8
#define trow 10
#define trowp 11

#define blank 0b1000000000000000
#define TM    0b100000000000000
void c(byte ctr, byte plan, bool warna, byte kp, byte kd, byte speed1, unsigned long timer, byte speed2, int sens, bool con1, unsigned long brk, byte mode, int motorL, int motorR, unsigned int dly, int sensbreak, bool con2, int sensitiv) {
  cntr = ctr;
  find_error[cntr]    = plan;
  warna_garis[cntr]   = warna;
  kp_counter[cntr]    = kp;
  kd_counter[cntr]    = kd;
  speed_1[cntr]       = speed1;
  timer_normal[cntr]  = timer;
  speed_2[cntr]       = speed2;
  trig_sensor[cntr]   = sens;
  trig_mode[cntr]     = con1;
  break_reading[cntr] = brk;
  mode_move[cntr]     = mode;
  speed_left[cntr]    = motorL;
  speed_right[cntr]   = motorR;
  delay_move[cntr]    = dly;
  delay_break[cntr]   = sensbreak;
  dbreak_mode[cntr]   = con2;
  sensitive[cntr] = sensitiv;
}

#define led1 2

void runn(byte plan, bool warna,  byte kp, byte kd, byte speed1, unsigned long timer, byte speed2, int sens, bool con1, unsigned long brk, byte mode, int motorL, int motorR, unsigned int dly, int sensbreak, bool con2, int sensitiv) {
  byte nowspeed = speed1;
  bool conTimer = 0;
  bool sensorOK = 0;
  bool selesai = 0;
  unsigned long ls = millis();
  digitalWrite(led1, LOW);
  while (1) {

    unsigned long nw = millis();
    if (nw - ls >= timer) {
      ls = nw;
      nowspeed = speed2;
      conTimer = 1;
      sensorOK = 0;
      digitalWrite(led1, HIGH);
    }
    mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);

    if (conTimer) {
      ls = nw;
    }

    if (con1 == dan) {
      if ((sens & binary) == sens) sensorOK = 1;
    }
    else if (con1 == atau) {
      if ((sens & binary) > 0) sensorOK = 1;
    }

    if (sens == TM) sensorOK = 1;
    if (sens == blank && binary == 0) sensorOK = 1;

    if (sensorOK && conTimer) {

      if (mode == free || mode == pid) {
        motor(-100, -100);
        while (1) {
          nw = millis();
          if (nw - ls >= brk) {
            ls = nw;
            break;
          }
        }
        while (1) {
          nw = millis();
          motor(motorL, motorR);

          if (nw - ls >= dly) {
            selesai = 1;
            break;
          }
        }
      }
      else {
        selesai = 1;
      }

    }

    if (selesai) {
      if (mode == stop) {
        unsigned long lst;
        lcd.clearDisplay();
        lcd.setCursor(46, 0);
        lcd.print("Finish");
        int mytmI = millis() - timee;
        float mytmF = mytmI / 1000.00;
        String mytmS = "Time : " + String(mytmF, 2) + " sec";
        lcd.setCursor(0, 16);
        lcd.print(mytmS);
        lcd.display();
        while (1) {
          motor(0, 0);
          if (millis() - lst >= 100) {
            lst = millis();
            digitalWrite(LED, !digitalRead (LED));
          }
        }
      }

      if (mode == pid) {
        while (1) {
          tce(warna, sensitiv);
          motor(motorL, motorR);
          if (con2 == atau) {
            if ((sensbreak & binary) > 0) {
              motor(0, 0);
              break;
            }
          }
          else if (con2 == dan) {
            if ((sensbreak & binary) == sensbreak) {
              motor(0, 0);
              break;
            }
          }

        }

        break;
      }
      if (mode == free) {
        error = 0;
        break;
      }

      if (mode == pick) {
        motor(0, 0);
        buka();
        delay(0);
        turun();
        delay(300);

        unsigned long lst = millis();
        while (1) {
          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          if (millis() - lst >= dly) {
            lst = millis();
            break;
          }
        }
        motor(0, 0);
        tutup();
        delay(300);
        naik();
        delay(200);
        break;
      }
      if (mode == drop) {
        motor(0, 0);
        turun();
        delay(400);
        unsigned long lst = millis();
        while (1) {
          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          if (millis() - lst >= dly) {
            lst = millis();
            break;
          }
        }
        motor(0, 0);
        buka();
        delay(100);
        naik();
        delay(50);
        motor(-15, -15);
        delay(300);
        break;
        
      }


      if (mode == pickp) {
        buka();
        turun();
        //        delay(300);
        while (1) {
          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          if (con2 == atau) {
            if ((sensbreak & binary) > 0) {
              motor(0, 0);
              break;
            }
          }
          else if (con2 == dan) {
            if ((sensbreak & binary) == sensbreak) {
              motor(0, 0);
              break;
            }
          }
        }
        tutup();
        delay(800);
        naik();
        break;
      }
      if (mode == dropp) {
        turun();
        delay(400);
        while (1) {
          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          if (con2 == atau) {
            if ((sensbreak & binary) > 0) {
              motor(0, 0);
              break;
            }
          }
          else if (con2 == dan) {
            if ((sensbreak & binary) == sensbreak) {
              motor(0, 0);
              break;
            }
          }
        }
        buka();
        delay(1000);
        naik();
        break;
      }
      if (mode == trow) {
        motor(0, 0);
        ls = millis();
        while (1) {
          //          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          nw = millis();
          if (nw - ls >= dly) {
            selesai = 1;
            break;
          }
        }
        motor(0, 0);
        jalankanThrow();
        break;
      }
      if (mode == trowp) {
        while (1) {
          mode_normal(plan, warna, nowspeed, kp, kd, sensitiv);
          if (con2 == atau) {
            if ((sensbreak & binary) > 0) {
              motor(0, 0);
              break;
            }
          }
          else if (con2 == dan) {
            if ((sensbreak & binary) == sensbreak) {
              motor(0, 0);
              break;
            }
          }
        }
        jalankanThrow();
        break;
      }
    }
  }
}

//============================== TEST FUNCTION ===============================//
int pos = 0;
void testMotor() {
  for (int a = 0; a <= 255; a++) {
    if (pos == 0) motor(a, 0);
    else if (pos == 1) motor(255 - a, 0);
    else if (pos == 2) motor(-a, 0);
    else if (pos == 3) motor(-255 + a, 0);
    else if (pos == 4) motor(0, a);
    else if (pos == 5) motor(0, 255 - a);
    else if (pos == 6) motor(0, - a);
    else if (pos == 7) motor(0, -255 + a);
    if (a == 255) {
      digitalWrite(LED, !digitalRead(LED));
      pos++;
    }
    if (pos >= 8) pos = 0;
    delay(5);
  }
}
void testSensor() {
  for (int a = 0; a <= 14; a++) {
    if (pos == 0) motor(a, 0);
    else if (pos == 1) motor(255 - a, 0);
    else if (pos == 2) motor(-a, 0);
    else if (pos == 3) motor(-255 + a, 0);
    else if (pos == 4) motor(0, a);
    else if (pos == 5) motor(0, 255 - a);
    else if (pos == 6) motor(0, - a);
    else if (pos == 7) motor(0, -255 + a);
    if (a == 255) {
      digitalWrite(LED, !digitalRead(LED));
      pos++;
    }
    if (pos >= 8) pos = 0;
    delay(5);
  }
}
//===========================Konfigurasi Servo==================================//
void setSudut(uint8_t n, int angle) {
  pwm.setPWM(n, 0, angle / 180.0 * 450 + 150);
}
//0= trower
//2= capit kanan
//3= capit kiri
//4= lengan kiri
//5= lengan kanan
void tutup() {
  setSudut(2,   0);
//  setSudut(3,  35);
}
void buka() {
  setSudut(2,   50);
//  setSudut(3,   0);
}
void turun() {
  setSudut(3,   0);
//  setSudut(5,  65);
}
void naik() {
  setSudut(3,  70);
//  setSudut(5,   0);
}
void jalankanPick() {
  buka();
  delay(500);
  turun();
  delay(500);
  tutup();
  delay(500);
  naik();
  delay(500);
}
void jalankanDrop() {
  turun();
  delay(500);
  buka();
  delay(500);
  naik();
  delay(500);
}
void jalankanThrow() {
  pwm.setPWM(0, 4096,   0);
  delay(67);
  pwm.setPWM(0,   0,  4096);
  delay(100);
}


#include "memory2.h"
void setup() {
  Serial.begin(115200);
  EEPROM.begin(100);
  Wire.begin();
  //init lcd
  lcd.begin(SH1106_SWITCHCAPVCC, 0x3C);
  lcd.setRotation(2);
  lcd.setTextColor(WHITE);
  //init sensor
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OUT, INPUT);
  pinMode(PIN_ADC_BUTTON_L, INPUT);
  pinMode(PIN_ADC_BUTTON_R, INPUT);
  pinMode(LED, OUTPUT);
  //init motor
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  ledcAttachPin(pin1, 0);
  ledcAttachPin(pin3, 1);
  ledcSetup(0, 490, 8);
  ledcSetup(1, 490, 8);
  //read memory kalibrasi
  for (int a = 0; a < 14; a++) {
    mid[a] = EEPROM.read(a * 2);
    mid[a] += (EEPROM.read(a * 2 + 1) << 8);
  }
  crsr = EEPROM.read(30);
  chp = EEPROM.read(31);
  ct = EEPROM.read(32);
  stp = EEPROM.read(33);
  plan = EEPROM.read(34);
  if (crsr == 5)crsr = 0;

  //reset eeprom
  if (tombol(UPL) && tombol(UPR)) {
    for (int a = 0; a < 14; a++) {
      mid[a] = 4095 / 2;
      EEPROM.write(a * 2, mid[a] & 255);
      EEPROM.write(a * 2 + 1, mid[a] >> 8);
    }
    for (int a = 28; a < 100; a++) {
      EEPROM.write(a, 0);
    }
    EEPROM.write(33, 99);
    EEPROM.commit();
    lcd.clearDisplay();
    lcd.setCursor(0, 0);
    lcd.print("Reset EEPROM Success");
    lcd.display();
    while (1) {
      digitalWrite(LED, !digitalRead(LED));
      delay(100);
    }
  }
  for (int a = 0; a < 100; a++) {
    cp[a] = 0;
  }
  memory(plan);
  home();
  lcd.clearDisplay();
  lcd.setCursor(49, 0);
  lcd.print("READY");
  lcd.display();
  while (tombol(OKL));
  lcd.clearDisplay();
  lcd.setCursor(44, 0);
  lcd.print("RUNNING");
  lcd.display();
  timee = millis();
  //init servo PCA
  pwm.begin();
  pwm.setOscillatorFrequency(27000000);
  pwm.setPWMFreq(50);  // This is the maximum PWM frequency
  delay(10);
  naik();
  buka();
}

void loop() {
  runn(
    find_error[counter],
    warna_garis[counter],
    kp_counter[counter],
    kd_counter[counter],
    speed_1[counter],
    timer_normal[counter],
    speed_2[counter],
    trig_sensor[counter],
    trig_mode[counter],
    break_reading[counter],
    mode_move[counter],
    speed_left[counter],
    speed_right[counter],
    delay_move[counter],
    delay_break[counter],
    dbreak_mode[counter],
    sensitive[counter]
  );
  if (counter >= stp) {
    motor(0, 0);
    unsigned long lst;
    lcd.clearDisplay();
    lcd.setCursor(45, 0);
    lcd.print("Stopped");
    int mytmI = millis() - timee;
    float mytmF = mytmI / 1000.00;
    String mytmS = "Time : " + String(mytmF, 2) + " sec";
    lcd.setCursor(0, 16);
    lcd.print(mytmS);
    lcd.display();
    while (1) {
      motor(0, 0);
      if (millis() - lst >= 100) {
        lst = millis();
        digitalWrite(LED, !digitalRead (LED));
      }
    }
  }
  counter++;
}
