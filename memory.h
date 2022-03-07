int SPB(int ctr) {
//c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
//    c(ctr++, 0, hitam, 5, 55, 100, 480, 40, 0b01100000000000, atau, 0, free,  51,  50, 120, 0b00110000000000, atau, 0); //1
//    c(ctr++, 0, putih, 6, 60,  80, 610, 25, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //2
//    c(ctr++, 0, putih, 6, 65,  70, 660, 17, 0b00000000000110, atau, 0,  pid, 120, -45, 120, 0b00000000001100, atau, 0); //3
//    c(ctr++, 0, putih, 6, 45,  60, 200, 40, 0b01100000000000, atau, 0, free,  50,  54, 100, 0b00110000000000, atau, 0); //4
//    c(ctr++, 0, hitam, 5, 45,  70, 270, 25, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //5
//    c(ctr++, 0, hitam, 5, 45,  50,  80, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //6
//    c(ctr++, 0, hitam, 5, 45,  50,  80, 30, 0b01100000000000, atau, 0,  pid, -45, 120, 110, 0b11000000000000, atau, 0); //7
//    c(ctr++, 0, hitam, 6, 45,  60, 120, 60,               TM, atau, 0, pick,   0,   0, 200, 0b00000011000000, atau, 0); //8
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-110, 270, 0b00000000111111, atau, 0); //9
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 100, 0b00000000111000, atau, 0); //10
  
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 55, 100, 480, 40, 0b01100000000000, atau, 0, free,  51,  50,  80, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 6, 60,  60, 215, 25, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 5, 45,  65, 320, 28, 0b00000000000110, atau, 0,  pid, 120, -50, 120, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 5, 65,  65, 790, 40, 0b00000000000011, atau, 0, free,  50,  52, 160, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 43,  60,  50, 25, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, hitam, 5, 43,  60,  50, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 43,  60, 330, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 140, 0b00110000000000, atau, 0); //8
    c(ctr++, 0, hitam, 5, 45,  60, 100, 55, 0b01100000000000, atau, 0, free,  55,  50, 210, 0b00000000001100, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,  70, 60,               TM, atau, 0, pick,   0,   0, 150, 0b00000011000000, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55, -110, 280, 0b00000000111111, atau, 0); //11
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 100, 0b00000000111000, atau, 0); //12
  return ctr;
}

int SPK(int ctr) {
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 45, 100, 420, 40, 0b01100000000000, atau, 0, free,  53,  50, 110, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 5, 50,  80, 220, 25, 0b01100000000000, atau, 0,  pid, -50, 120, 140, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 5, 35,  60, 440, 35, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  45, 100, 40, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //6
    c(ctr++, 0, putih, 5, 40,  50,   0, 40,               TM, atau, 0, free,  40,  50, 230, 0b00000000111000, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 180, 0b00000000111000, atau, 0); //8
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-115, 290, 0b00000000111111, atau, 0); //9
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //10
  return ctr;
}

int SPM(int ctr) {
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 45,  60, 300, 30, 0b01100000000000, atau, 0,  pid, -55, 110, 160, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, hitam, 6, 40,  70, 330, 25, 0b01100000000000, atau, 0,  pid, -55, 120, 130, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 5, 40,  50, 180, 40, 0b00000000000011, atau, 0,  pid, 125, -55, 130, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, hitam, 5, 45,  50,   0, 40,               TM, atau, 0, free,  30,  50, 120, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 45,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 370, 0b00000011000000, atau, 0); //5
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,-105,  55, 230, 0b11111100000000, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50,  50, 0b11000000000000, atau, 0); //7
    //7
  return ctr;
}

int PBDB(int ctr) {
    c(ctr++, 0, hitam, 5, 55,  65, 385, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, hitam, 5, 55,  70, 320, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 125, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, hitam, 5, 55,  60, 120, 30, 0b01100000000000, atau, 0, free, -45, 120, 155, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 5, 55,  60,   0, 40,               TM, atau, 0, free,  43,  30, 140, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, putih, 6, 55,  80, 170, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, putih, 5, 45,  65, 435, 32, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, putih, 6, 65,  70, 650, 40, 0b01100000000000, atau, 0, free,  45,  50, 190, 0b00110000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 35,  70, 245, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //8
    c(ctr++, 0, hitam, 5, 55,  60, 185, 30, 0b01100000000000, atau, 0, free,  40,  30, 220, 0b00110000000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0,  40, 0b00000011000000, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-110,  55, 280, 0b11111100000000, atau, 0); //11
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  20, 120, 0b00000000111000, atau, 0); //12
    
//    c(ctr++, 0, putih, 6, 55,  90, 300, 20, 0b00110000000000, atau, 0, free,  60,  60,  80, 0b00110000000000, atau, 0); //15
//    c(ctr++, 0, putih, 6, 55,  60, 450, 35, 0b01100000000000, atau, 0,  pid, -45, 120, 130, 0b00110000000000, atau, 0); //15
//    c(ctr++, 0, putih, 6, 55,  50, 440, 30, 0b00000000000110, atau, 0,  pid, 120, -45, 130, 0b00000000000110, atau, 0); //1
//    c(ctr++, 0, putih, 6, 55,  60, 180, 40, 0b01100000000000, atau, 0, free,  50,  43, 180, 0b00110000000000, atau, 0); //17
//    c(ctr++, 0, hitam, 5, 55,  70, 275, 30, 0b01100000000000, atau, 0,  pid, -45, 120, 160, 0b00110000000000, atau, 0); //18
//    c(ctr++, 0, hitam, 5, 55,  60, 170, 30, 0b01100000000000, atau, 0, free,  40,  30, 200, 0b00110000000000, atau, 0); //19
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0,  60, 0b00000011000000, atau, 0); //20
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-110,  60, 270, 0b11111100000000, atau, 0); //21
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  20, 120, 0b00000000111000, atau, 0); //22
//    //14
  return ctr;
}

int PKDK(int ctr) {
    c(ctr++, 0, putih, 5, 65,  60, 465, 30, 0b01100000000000, atau, 0,  pid, -55, 120, 110, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 5, 55,  60, 385, 30, 0b00000000000110, atau, 0,  pid, 120, -45, 120, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, putih, 5, 50,  70, 390, 40, 0b00000000000110, atau, 0, free,  54,  38, 100, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0, 130, 0b00000011000000, atau, 0); //4
    //4
  return ctr;
}

int PMDM(int ctr) {
    c(ctr++, 0, hitam, 5, 35,  60, 150, 40, 0b01100000000000, atau, 0,  pid, -60, 120, 130, 0b01100000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 55,  60, 395, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, hitam, 5, 35,  60, 340, 35, 0b01100000000000, atau, 0, free, -55, 140, 135, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50,  40, 180, 0b00000000111000, atau, 0); //3
    c(ctr++, 0, putih, 5, 35,  60, 322, 32, 0b00000000000011, atau, 0,  pid, 120, -50, 150, 0b00000000001100, atau, 0); //4
    c(ctr++, 0, putih, 6, 45,  60, 185, 30, 0b00000000000110, atau, 0, free,  50,  52, 130, 0b00000000001100, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0, 145, 0b00000011000000, atau, 0); //6
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,-110,  60, 270, 0b11111100000000, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50,  30,  80, 0b00000000111000, atau, 0); //8
    //9    
  return ctr;
}

int DBPK(int ctr) {
    c(ctr++, 0, hitam, 5, 35,  60, 250, 35, 0b00000000000110, atau, 0,  pid, 120, -50, 150, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, hitam, 5, 35,  60,   0, 50,               TM, atau, 0, free,  35,  30, 120, 0b00000011000000, atau, 0); //2
    c(ctr++, 0, hitam, 5, 55,  60, 240, 50, 0b11000000000000, atau, 0, free,  52,  50,  50, 0b00000011000000, atau, 0); //3
    c(ctr++, 0, putih, 6, 50,  60, 270, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, putih, 5, 35,  60, 440, 35, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  45, 110, 35, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //6
    c(ctr++, 0, putih, 5, 40,  50,   0, 40,               TM, atau, 0, free,  40,  50, 230, 0b00000000111000, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 180, 0b00000000111000, atau, 0); //8
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-115, 290, 0b00000000111111, atau, 0); //9
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //10
    //10
  return ctr;
}

int DBPM(int ctr) {
    c(ctr++, 0, hitam, 6, 55,  70, 700, 30, 0b01100000000000, atau, 0,  pid, -60, 120, 130, 0b00110000000000, atau, 0); //23
    c(ctr++, 0, hitam, 5, 45,  45, 110, 40, 0b00000000000011, atau, 0,  pid, 125, -60, 120, 0b00000000001100, atau, 0); //24
    c(ctr++, 0, hitam, 5, 45,  50,   0, 40,               TM, atau, 0, free,  45,  50,  80, 0b00000000111000, atau, 0); //25
    c(ctr++, 0, hitam, 5, 45,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 390, 0b00000011000000, atau, 0); //26
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50, -125, 280, 0b11000000000000, atau, 0); //27
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50,  50, 0b11000000000000, atau, 0); //28
    //6
  return ctr;
}

int DKPB(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-120,   5, 230, 0b11111100000000, atau, 0); //27
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  45,  10, 130, 0b00000000111000, atau, 0); //28
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  45, 400, 0b00000000111000, atau, 0); //29
    c(ctr++, 0, hitam, 5, 35,  60,  70, 40, 0b01100000000000, atau, 0,  pid, -50, 120, 135, 0b00110000000000, atau, 0); //30
    c(ctr++, 0, hitam, 5, 35,  60, 450, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //31
    c(ctr++, 0, hitam, 5, 35,  60, 320, 33, 0b01100000000000, atau, 0,  pid, -55, 120, 140, 0b01100000000000, atau, 0); //32
    c(ctr++, 0, hitam, 5, 35,  60, 100, 55, 0b01100000000000, atau, 0, free,  54,  50, 210, 0b00000000001100, atau, 0); //33
    c(ctr++, 0, hitam, 5, 35,  60,  70, 60,               TM, atau, 0, pick,   0,   0, 150, 0b00000011000000, atau, 0); //34
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-110, 280, 0b00000000111111, atau, 0); //35
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 100, 0b00000000111000, atau, 0); //36
    //10
  return ctr;
}

int DKPM(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid, -100,  60, 300, 0b11111100000000, atau, 0); //37
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50,  20,  90, 0b00000000111000, atau, 0); //38
    c(ctr++, 0, putih, 5, 55,  60, 500, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //39
    c(ctr++, 0, putih, 5, 35,  60,1020, 60, 0b00000000000110, atau, 0, free,  50,  52,  70, 0b00000000001100, atau, 0); //40
    c(ctr++, 0, hitam, 5, 45,  40,  15, 20, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //41
    c(ctr++, 0, hitam, 5, 45,  60,  80, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //42
    c(ctr++, 0, hitam, 5, 45,  60, 390, 30, 0b00000000000011, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //43
    c(ctr++, 0, hitam, 5, 45,  50,   0, 40,               TM, atau, 0, free,  45,  50,  80, 0b00000000111000, atau, 0); //44
    c(ctr++, 0, hitam, 5, 45,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 400, 0b00000011000000, atau, 0); //45
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,  55, -115, 260, 0b00000000111111, atau, 0); //46
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50,  50, 0b11000000000000, atau, 0); //47
  return ctr;
}

int DMPB(int ctr) {
    c(ctr++, 0, putih, 6, 55,  65, 840, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //34
    c(ctr++, 0, putih, 5, 65,  65, 790, 40, 0b00000000000011, atau, 0, free,  50,  52, 160, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 43,  60,  50, 25, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, hitam, 5, 43,  60,  50, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 43,  60, 330, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 140, 0b00110000000000, atau, 0); //8
    c(ctr++, 0, hitam, 5, 45,  60, 100, 55, 0b01100000000000, atau, 0, free,  55,  50, 210, 0b00000000001100, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,  70, 60,               TM, atau, 0, pick,   0,   0, 150, 0b00000011000000, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55, -110, 280, 0b00000000111111, atau, 0); //11
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 100, 0b00000000111000, atau, 0); //12
  return ctr;
}
    
int DMPK(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60, 765, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //26
    c(ctr++, 0, putih, 5, 35,  45, 120, 40, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //39
    c(ctr++, 0, putih, 5, 40,  50,   0, 40,               TM, atau, 0, free,  48,  40, 230, 0b00000000111000, atau, 0); //40
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 180, 0b00000000111000, atau, 0); //41
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-110, 300, 0b00000000111111, atau, 0); //42
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //43
    //7
    return ctr;
}


int DBS(int ctr) {
    c(ctr++, 0, hitam, 5, 55,  65, 220, 35, 0b01100000000000, atau, 0,  pid, -50, 120, 125, 0b00110000000000, atau, 0); //23
    c(ctr++, 0, hitam, 5, 65,  60,   0, 50,               TM, atau, 0, free,  45,  50, 380, 0b00000011000000, atau, 0); //24
    //2
  return ctr;
}

int DKS(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,   5,-125, 240, 0b11111100000000, atau, 0); //27
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  45, 130, 0b00000000111000, atau, 0); //28
    c(ctr++, 0, putih, 6, 55,  60, 120, 50, 0b00000000000110, atau, 0,  pid, 120, -50, 165, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 6, 55,  50, 160, 45, 0b11000000000000, atau, 0,  pid, -45, 120, 120, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 7, 55,  65, 800, 50, 0b01100000000000, atau, 0, free,  50,  50, 120, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, hitam, 5, 35,  45, 420, 55, 0b01100000000000, atau, 0, free,  50,  52, 500, 0b00110000000000, atau, 0); //63
  
//    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid, -120,  50, 280, 0b11111100000000, atau, 0); //48
//    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  15, 120, 0b00000000111000, atau, 0); //4
//    c(ctr++, 0, putih, 6, 60,  60, 240, 50, 0b00000000000110, atau, 0, free, 120, -50, 165, 0b00000000001100, atau, 0); //3
//    c(ctr++, 0, putih, 3,  5,  40,   0, 10,               TM, atau, 0, free,  45,  35, 120, 0b00110000000000, atau, 0); //6
//    c(ctr++, 0, hitam, 5, 35,  50,  50, 40, 0b00000000000110, atau, 0,  pid, 120, -50, 100, 0b00000000001100, atau, 0); //7
//    c(ctr++, 0, hitam, 5, 35,  45, 130, 55, 0b01100000000000, atau, 0,  pid, -60, 120, 120, 0b00110000000000, atau, 0); //63
//    c(ctr++, 0, hitam, 6, 35,  10,   0, 40,               TM, atau, 0, free,  30,  41, 150, 0b00110000000000, atau, 0); //64
//    c(ctr++, 0, hitam, 5, 45,  10,   0, 40,               TM, atau, 0, free,   1,   1, 500, 0b00110000000000, atau, 0); //6
//    c(ctr++, 0, hitam, 5,  5,   0,   0,  0,               TM, atau, 0, trow,   0,   0,   0, 0b00110000000000, atau, 0); //65
  //8
  return ctr;
}

int DMS(int ctr) {
    c(ctr++, 0, putih, 5, 45,  60, 300, 40, 0b01100000000000, atau, 0,  pid, -50, 120, 150, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 5, 50,  70, 250, 40, 0b01100000000000, atau, 0, free,  48,  50, 120, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 5, 35,  50, 250, 45, 0b00000000000110, atau, 0, free,  50,  50, 500, 0b00000000001100, atau, 0); //3
    //3
  return ctr;
}

void memory(int plan) {

  if (plan == 0) {
    int ctr = 0;    //ST
    cp[1] = 0;
    
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 45,  60, 570, 40, 0b01100000000000, atau, 0, free,  51,  52, 100, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 5, 50,  80, 730, 30, 0b01100000000000, atau, 0,  pid, -55, 120, 120, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 5, 50,  50,  80, 35, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 5, 50,  50, 130, 40, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //4
    c(ctr++, 0, putih, 5, 50,  80,  90, 40, 0b01100000000000, atau, 0, free, -40, 120, 170, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, putih, 3,  5,  40,   0, 10,               TM, atau, 0, free,  45,  40, 140, 0b00110000000000, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  40,  20, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 100, 0b00000000001100, atau, 0); //7
    c(ctr++, 0, hitam, 5, 35,  45, 120, 50, 0b01100000000000, atau, 0,  pid, -60, 120, 130, 0b00011000000000, atau, 0); //8
    c(ctr++, 0, hitam, 6, 35,  10,   0, 40,               TM, atau, 0, free,  40,  40, 155, 0b00110000000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 45,  10,   0, 40,               TM, atau, 0, free,   1,   1, 500, 0b00110000000000, atau, 0); //10
    c(ctr++, 0, hitam, 5,  5,   0,   0,  0,               TM, atau, 0, trow,   0,   0,   0, 0b00110000000000, atau, 0); //11
  }

  if (plan == 1) {
    int ctr = 0;    //biru-kuning-merah
    cp[1] = 0;
    //S-Biru
    ctr = SPB(ctr);//12
    //PBiru-DBiru
    ctr = PBDB(ctr);//2
    //DBiru-PKuning
    ctr = DBPK(ctr);//2
    //PKuning-DKuning
    ctr = PKDK(ctr);//2
    //DKuning-PMerah
    ctr = DKPM(ctr);//2
    //PMerah-DMerah
    ctr = PMDM(ctr);
    //DMerah-S
    ctr = DMS(ctr);
    }

  if (plan == 2) {
    int ctr = 0;    //biru-merah-kuning
    cp[1] = 56;
    //S-Biru
    ctr = SPB(ctr);//12
    //PBiru-DBiru
    ctr = PBDB(ctr);//2
    //DBiru-PMerah
    ctr = DBPM(ctr);//2
    ctr = PMDM(ctr);//15
    ctr = DMPK(ctr);//22
    ctr = PKDK(ctr);//27
    //DKuning-Trow
    ctr = DKS(ctr);//27
    }

  if (plan == 3) {
    int ctr = 0;    //kuning-biru-merah
    cp[1] = 56;
    //S-PKuning
    ctr = SPK(ctr);//2
    //PKuning-DKuning
    ctr = PKDK(ctr);//2
    //DKuning-PBiru
    ctr = DKPB(ctr);//2
    //PBiru-DBiru
    ctr = PBDB(ctr);//2
    //DBiru-PMerah
    ctr = DBPM(ctr);//2
    //PMerah-DMerah
    ctr = PMDM(ctr);//2
    ctr = DMS(ctr);
      }

  if (plan == 4) {
    int ctr = 0;    //kuning-merah-biru
    cp[1] = 56;
    //S-PK
    ctr = SPK(ctr);//2
    //PK-DK
    ctr = PKDK(ctr);//2
    //DK-PM
    ctr = DKPM(ctr);//2
    //PM-DM
    ctr = PMDM(ctr);//2
    //DM-PB
    ctr = DMPB(ctr);//2
    //PB-DB
    ctr = PBDB(ctr);//2
    //DB-T
    
  }

  if (plan == 5) {
    int ctr = 0;    //merah-biru-kuning
    cp[1] = 56;
    ctr = SPM(ctr);//7
    ctr = PMDM(ctr);//
    //DMerah-PBiru
    ctr = DMPB(ctr);//
    //PBiru-DBiru
    ctr = PBDB(ctr);//51
    //DBiru-PKuning
    ctr = DBPK(ctr);//51
    //PKuning-DKuning
    ctr = PKDK(ctr);//2
    //DKuning-Trow
    ctr = DKS(ctr);//2
    
    }


  if (plan == 6) {
    int ctr = 0;    //merah-kuning-biru
    cp[1] =  0;
    ctr = SPM(ctr);//6
    ctr = PMDM(ctr);//15
    ctr = DMPK(ctr);//22
    ctr = PKDK(ctr);//27
    ctr = DKPB(ctr);//37
    ctr = PBDB(ctr);//51
    ctr = DBS(ctr);//63
  }

  if (plan == 7) {
    int ctr = 0;    //B-K
    cp[1] = 0;
    ctr = SPB(ctr);//12
    ctr = PBDB(ctr);//26
    ctr = DBPK(ctr);//36
    ctr = PKDK(ctr);//40
    ctr = DKS(ctr);//48
  }

  if (plan == 8) {
    int ctr = 0;    //K-B
    cp[1] = 0;
    ctr = SPK(ctr);//
    ctr = PKDK(ctr);//
    ctr = DKPB(ctr);//
    ctr = PBDB(ctr);//
    ctr = DBS(ctr);//
  }
  
  if (plan == 9) {
    int ctr = 0;    //K-M
    cp[1] = 0;
    ctr = SPK(ctr);//
    ctr = PKDK(ctr);//
    ctr = DKPM(ctr);//
    ctr = PMDM(ctr);//
    ctr = DMS(ctr);//
  }
  
  if (plan == 10) {
    int ctr = 0;    //M-K
    cp[1] = 0;
    ctr = SPM(ctr);//6
    ctr = PMDM(ctr);//15
    ctr = DMPK(ctr);//22
    ctr = PKDK(ctr);//27
    ctr = DKS(ctr);//
  }
  
  if (plan == 11) {
    int ctr = 0;    //B-M
    cp[1] = 0;
    ctr = SPB(ctr);//
    ctr = PBDB(ctr);//
    ctr = DBPM(ctr);//
    ctr = PMDM(ctr);//
    ctr = DMS(ctr);//
  }

  if (plan == 12) {
    int ctr = 0;    //M-B
    cp[1] = 0;
    ctr = SPM(ctr);//
    ctr = PMDM(ctr);//
    ctr = DMPB(ctr);//
    ctr = PBDB(ctr);//
    ctr = DBS(ctr);//
  }

  if (plan == 13) {
    int ctr = 0;    //Biru
    cp[1] = 0;
    ctr = SPB(ctr);//
    ctr = PBDB(ctr);//
    ctr = DBS(ctr);//
  }
  
  if (plan == 14) {
    int ctr = 0;    //Kuning
    cp[1] = 0;
    ctr = SPK(ctr);//
    ctr = PKDK(ctr);//
    ctr = DKS(ctr);//
  }

  if (plan == 15) {
    int ctr = 0;    //Merah
    cp[1] = 0;
    ctr = SPM(ctr);//
    ctr = PMDM(ctr);//
    ctr = DMS(ctr);//
  }

  if (plan == 99) {
    int ctr = 0;    //biru-merah-kuning
    cp[1] = 56;
    c(ctr++, 0, hitam, 5,  5,   0,   0,  0,               TM, atau, 0, trow,   0,   0,   0, 0b00110000000000, atau, 0); //
  }
}
