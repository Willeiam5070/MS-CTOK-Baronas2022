#include <Ps3Controller.h>
#include <Servo.h>
#define pwm1 4
#define pwm2 16
#define pwm3 17
#define pwm4 18
#define pinGripUp 33
#define pinGripDown 32
#define defaultSpeed 180

bool maju, mundur, kiri, kanan, LanalogKanan, LanalogKiri, nos, half;
bool gripUp, gripDown, gripOpen, gripClose;
int LanalogValX, nowSpeed;
Servo legL;
Servo legR;

void logic() {
  maju = Ps3.data.button.cross;
  mundur = Ps3.data.button.square;
  kiri = Ps3.data.button.left || LanalogKiri;
  kanan = Ps3.data.button.right || LanalogKanan;
  nos = Ps3.data.button.r1;
  half = Ps3.data.button.triangle;
  gripUp = Ps3.data.button.l1;
  gripDown = Ps3.data.button.l2;
  gripOpen = Ps3.data.button.r2;
  //gripClose = Ps3.data.button.;

  if (nos) nowSpeed = 255;
  else nowSpeed = defaultSpeed;


  if (half) {
    maju = 1;
    nowSpeed = 90;
  }

  if (gripUp && !gripDown) digitalWrite(pinGripUp, LOW);
  else if (!gripUp && gripDown) digitalWrite(pinGripDown, LOW);
  else {
    digitalWrite(pinGripUp, HIGH);
    digitalWrite(pinGripDown, HIGH);
  }

  if (gripOpen) letGripOpen();
  else letGripClose();
  if (!nos) {
    if      (maju && kiri)    motor(        0,  nowSpeed - 10);
    else if (maju && kanan)   motor( nowSpeed - 10,         0);
    else if (mundur && kiri)  motor(        0, -nowSpeed - 0);
    else if (mundur && kanan) motor(-nowSpeed + 0,         0);
    else if (maju)            motor( nowSpeed - 5,  nowSpeed - 0);
    else if (mundur)          motor(-nowSpeed - 80, -nowSpeed -80);
    else if (kiri)            motor(-nowSpeed + 23,  nowSpeed - 20);
    else if (kanan)           motor( nowSpeed - 20, -nowSpeed + 23);
    else                      motor(        0,         0);
  }
  if (half) {
    if      (maju && kiri)    motor(        0,  nowSpeed - 0);
    else if (maju && kanan)   motor( nowSpeed - 0,         0);
    else if (mundur && kiri)  motor(        0, -nowSpeed - 0);
    else if (mundur && kanan) motor(-nowSpeed + 0,         0);
    else if (maju)            motor( nowSpeed - 2,  nowSpeed - 0);
    else if (mundur)          motor(-nowSpeed + 6, -nowSpeed + 0);
    else if (kiri)            motor(-nowSpeed + 23,  nowSpeed - 20);
    else if (kanan)           motor( nowSpeed - 20, -nowSpeed + 23);
    else                      motor(        0,         0);
  }
  else {
    if      (maju && kiri)    motor(        0,  nowSpeed - 0);
    else if (maju && kanan)   motor( nowSpeed - 0,         0);
    else if (mundur && kiri)  motor(        0, -nowSpeed + 0);
    else if (mundur && kanan) motor(-nowSpeed + 0,         0);
    else if (maju)            motor( nowSpeed - 0,  nowSpeed - 3);
    else if (mundur)          motor(-nowSpeed + 0, -nowSpeed + 8);
    else if (kiri)            motor(-nowSpeed + 0,  nowSpeed - 0);
    else if (kanan)           motor( nowSpeed - 0, -nowSpeed + 0);
    else                      motor(        0,         0);

  }
}

void letGripOpen() {
  legL.write(0);
  legR.write(35);
}
void letGripClose() {
  legL.write(35);
  legR.write(0);
}

void setup() {
  Serial.begin(115200);
  Ps3.begin("00:00:00:27:20:07");
  ledcAttachPin(pwm1, 5);
  ledcAttachPin(pwm3, 6);
  ledcSetup(5, 490, 8);
  ledcSetup(6, 490, 8);
  pinMode(pwm2, OUTPUT);
  pinMode(pwm4, OUTPUT);
  pinMode(pinGripUp, OUTPUT);
  pinMode(pinGripDown, OUTPUT);
  digitalWrite(pinGripUp, HIGH);
  digitalWrite(pinGripDown, HIGH);
  pinMode(2, OUTPUT);
  legL.attach(25);
  legR.attach(26);
  while (!Ps3.isConnected()) {
    digitalWrite(2, !digitalRead(2));
    delay(100);
  }
  digitalWrite(2, HIGH);
}

void loop() {
  if (Ps3.isConnected()) {
    LanalogValX = Ps3.data.analog.stick.lx;
    if (LanalogValX > 100) {
      LanalogKanan = 1;
      LanalogKiri = 0;
    }
    else if (LanalogValX < -100) {
      LanalogKanan = 0;
      LanalogKiri = 1;
    }
    else {
      LanalogKanan = 0;
      LanalogKiri = 0;
    }
    logic();
  }
  else ESP.restart();

}

void motor(int speedL, int speedR) {
  if (speedL > 255) speedL = 255;
  else if (speedL < -255) speedL = -255;
  if (speedR > 255) speedR = 255;
  else if (speedR < -255) speedR = -255;

  if (speedL > 0) {
    digitalWrite(pwm2, HIGH);
    ledcWrite(5, 255 - speedL);
  }
  else if (speedL < 0) {
    digitalWrite(pwm2, LOW);
    ledcWrite(5, (speedL * -1));
  }
  else {
    digitalWrite(pwm2, LOW);
    ledcWrite(5, 0);
  }

  if (speedR > 0) {
    digitalWrite(pwm4, HIGH);
    ledcWrite(6, 255 - speedR);
  }
  else if (speedR < 0) {
    digitalWrite(pwm4, LOW);
    ledcWrite(6, (speedR * -1));
  }
  else {
    digitalWrite(pwm4, LOW);
    ledcWrite(6, 0);
  }
}
