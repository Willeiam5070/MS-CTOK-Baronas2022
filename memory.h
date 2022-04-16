int SPB(int ctr) {
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  51,  50, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 30,  80, 550, 40, 0b01100000000000, atau, 0, free,  60,  60, 100, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 4, 30,  90, 550, 35, 0b01100000000000, atau, 0,  pid, 110, -50, 110, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 4, 35,  55, 180, 35, 0b01100000000000, atau, 0,  pid, -50, 100, 130, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 5, 35,  60, 320, 40, 0b01100000000000, atau, 0, free,  48,  50,  50, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, hitam, 4, 35,  20,  25, 15, 0b01100000000000, atau, 0,  pid, -50, 110, 100, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, hitam, 4, 35,  75, 310, 30, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  80, 290, 30, 0b01100000000000, atau, 0,  pid, -50, 100, 140, 0b01100000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 35,  80,  70, 55, 0b01100000000000, atau, 0, free,  50,  50, 210, 0b00000000001100, atau, 0); //8
    c(ctr++, 0, hitam, 4, 30,  40, 155, 40,               TM, atau, 0, pick,   0,   0, 120, 0b00000011000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  50,-100, 250, 0b00000000111111, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 140, 0b00000000111000, atau, 0); //11
    
//    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
//    c(ctr++, 0, hitam, 5, 55, 100, 480, 40, 0b01100000000000, atau, 0, free,  51,  50,  80, 0b00110000000000, atau, 0); //1
//    c(ctr++, 0, putih, 4, 30,  60, 210, 25, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //2
//    c(ctr++, 0, putih, 4, 35,  65, 430, 32, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //3
//    c(ctr++, 0, putih, 4, 28,  65, 830, 45, 0b01100000000000, atau, 0, free,  50,  52,  75, 0b00110000000000, atau, 0); //4
//    c(ctr++, 0, hitam, 4, 25,  40,  10, 20, 0b00000000000110, atau, 0,  pid, 120, -50, 140, 0b00000000001100, atau, 0); //6
//    c(ctr++, 0, hitam, 4, 25,  60,  50, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //7
//    c(ctr++, 0, hitam, 4, 25,  60, 340, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 140, 0b00110000000000, atau, 0); //8
//    c(ctr++, 0, hitam, 4, 25,  60, 100, 55, 0b01100000000000, atau, 0, free,  55,  50, 210, 0b00000000001100, atau, 0); //9
//    c(ctr++, 0, hitam, 5, 35,  60,  70, 60,               TM, atau, 0, pick,   0,   0, 150, 0b00000011000000, atau, 0); //10
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  50,-105, 280, 0b00000000111111, atau, 0); //11
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 100, 0b00000000111000, atau, 0); //12
    //11
  return ctr;
}

int SPK(int ctr) {
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 4, 25, 100, 430, 30, 0b01100000000000, atau, 0, free,  53,  50, 110, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 4, 25,  70, 250, 35, 0b01100000000000,  dan, 0,  pid, -50, 110, 160, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 4, 35,  60, 170, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 4, 35,  45, 150, 35, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, putih, 4, 40,  50, 610, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0,  80, 0b00000000111000, atau, 0); //6
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-105, 270, 0b00000000111111, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //8
//8
  return ctr;
}

int SPM(int ctr) {
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 4, 35,  60, 250, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, hitam, 5, 25,  70, 330, 25, 0b01100000000000, atau, 0,  pid, -55, 120, 130, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 4, 35,  50,  95, 35, 0b00000000000011, atau, 0,  pid, 115, -55, 110, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, hitam, 4, 30,  50, 240, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 180, 0b00000011000000, atau, 0); //5
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,  50,-105, 170, 0b00000000111111, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 120, 0b11000000000000, atau, 0); //7
    //7
  return ctr;
}

int PBDB(int ctr) {

    c(ctr++, 0, hitam, 4, 35,  65, 340, 35, 0b00000000000110, atau, 0,  pid, 110, -55, 120, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, hitam, 5, 25,  70, 290, 30, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 4, 25,  70, 360, 35, 0b00000000000110, atau, 0, free, 110, -50, 160, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 5, 55,  60,   0, 40,               TM, atau, 0, free,  25,  40, 140, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, putih, 4, 30,  60, 290, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //5
    c(ctr++, 0, putih, 4, 30,  50, 160, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 110, 0b00110000000000, atau, 0); //6
    c(ctr++, 0, putih, 4, 35,  70, 840, 50, 0b01100000000000, atau, 0, free,  50,  50, 120, 0b00110000000000, atau, 0); //7
    c(ctr++, 0, hitam, 4, 35,  65, 220, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 140, 0b00110000000000, atau, 0); //8
    c(ctr++, 0, hitam, 5, 25,  50, 100, 30, 0b01100000000000, atau, 0, free,  42,  40, 270, 0b00110000000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0,  40, 0b00000011000000, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-110,  50, 260, 0b11111100000000, atau, 0); //11
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  20, 120, 0b00000000111000, atau, 0); //12
    //12
    
//    c(ctr++, 0, hitam, 5, 35,  65, 380, 33, 0b00000000000110, atau, 0,  pid, 110, -50, 130, 0b00000000001100, atau, 0); //1
//    c(ctr++, 0, hitam, 4, 35,  70, 310, 30, 0b00000000000110, atau, 0,  pid, 110, -50, 125, 0b00000000001100, atau, 0); //2
//    c(ctr++, 0, hitam, 4, 35,  60, 125, 35, 0b01100000000000, atau, 0, free, -45, 110, 165, 0b00110000000000, atau, 0); //3
//    c(ctr++, 0, putih, 5, 55,  60,   0, 40,               TM, atau, 0, free,  40,  32, 230, 0b00000000111000, atau, 0); //4
//    c(ctr++, 0, putih, 4, 35,  70, 260, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //5
//    c(ctr++, 0, putih, 6, 55,  65, 440, 30, 0b00000000000110, atau, 0,  pid, 100, -55, 130, 0b00000000001100, atau, 0); //6
//    c(ctr++, 0, putih, 6, 45,  70, 780, 40, 0b01100000000000, atau, 0, free,  48,  50, 120, 0b00110000000000, atau, 0); //7
//    c(ctr++, 0, hitam, 5, 35,  65, 250, 30, 0b01100000000000, atau, 0,  pid, -50, 110, 120, 0b00110000000000, atau, 0); //8
//    c(ctr++, 0, hitam, 4, 35,  55, 180, 30, 0b01100000000000, atau, 0, free,  40,  30, 260, 0b00110000000000, atau, 0); //9
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0,  40, 0b00000011000000, atau, 0); //10
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-110,  50, 270, 0b11111100000000, atau, 0); //11
//    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  10, 130, 0b00000000111000, atau, 0); //12
    //12
    
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

//    c(ctr++, 0, putih, 4, 35,  60, 215, 35, 0b01100000000000, atau, 0,  pid, -45, 110, 110, 0b00110000000000, atau, 0); //1
//    c(ctr++, 0, putih, 4, 45,  60, 440, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //2
//    c(ctr++, 0, putih, 4, 30,  70, 720, 40, 0b00000000000110, atau, 0, free,  52,  40,  50, 0b00000000001100, atau, 0); //3
//    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0, 100, 0b00000011000000, atau, 0); //4
    
    c(ctr++, 0, putih, 4, 35,  60, 415, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 110, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 5, 35,  60, 380, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 100, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, putih, 3, 35,  75, 400, 40, 0b00000000000110, atau, 0, free,  40,  40, 120, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 3, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0, 120, 0b00000011000000, atau, 0); //4
    //4
  return ctr;
}

int PMDM(int ctr) {
    c(ctr++, 0, hitam, 3, 35,  60, 160, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b01100000000000, atau, 0); //1
    c(ctr++, 0, hitam, 4, 35,  60, 370, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 140, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, hitam, 4, 35,  60, 340, 38, 0b01100000000000, atau, 0, free, -50, 140, 130, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, hitam, 4, 35,  60,   0, 40,               TM, atau, 0, free,  35,  30, 100, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, putih, 4, 35,  60, 330, 35, 0b01100000000000, atau, 0,  pid, 120, -60, 130, 0b00000000001100, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  60, 320, 30, 0b00000000000110, atau, 0, free,  40,  50,   0, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, putih, 4, 35,  60,   0, 60,               TM, atau, 0, drop,   0,   0,  60, 0b00000011000000, atau, 0); //7
    c(ctr++, 0, putih, 4, 35,  60,   0, 40,               TM, atau, 0,  pid,-100,  55, 260, 0b11111100000000, atau, 0); //8
    c(ctr++, 0, putih, 4, 35,  60,   0, 40,               TM, atau, 0, free,  40,  20, 100, 0b00000000111000, atau, 0); //9    
  return ctr;
}

int DBPK(int ctr) {
    c(ctr++, 0, hitam, 4, 35,  60, 260, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 110, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, hitam, 4, 35,  60,   0, 50,               TM, atau, 0, free,  33,  30, 120, 0b00000011000000, atau, 0); //2
    c(ctr++, 0, hitam, 4, 35,  60, 240, 50, 0b11000000000000, atau, 0, free,  52,  50,  50, 0b00000011000000, atau, 0); //3
    c(ctr++, 0, putih, 5, 30,  60, 270, 30, 0b01100000000000, atau, 0,  pid, -50, 120, 130, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, putih, 4, 35,  60, 170, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 4, 35,  45, 150, 35, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, putih, 4, 40,  50, 610, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0,  80, 0b00000000111000, atau, 0); //6
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-105, 270, 0b00000000111111, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //8
return ctr;
}

int DBPM(int ctr) {
    c(ctr++, 0, hitam, 5, 35,  70, 710, 35, 0b00000000000110, atau, 0,  pid, -50, 110, 110, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 4, 35,  50, 140, 35, 0b00000000000011, atau, 0,  pid, 110, -50, 130, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, hitam, 5, 40,  50, 270, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 45,  60,   0, 40,               TM, atau, 0, pick,   0,   0,  90, 0b00000011000000, atau, 0); //5
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,  50,-105, 190, 0b00000000000111, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 120, 0b11000000000000, atau, 0); //7
    //6
  return ctr;
}

int DKPB(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-100,  60, 260, 0b11111100000000, atau, 0); //37
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  20, 120, 0b00000000111000, atau, 0); //38
    c(ctr++, 0, putih, 5, 35,  60, 240, 40, 0b00000000000110, atau, 0, free, 110, -50, 130, 0b00000000111000, atau, 0); //3
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  40,  45, 130, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 35,  60,  60, 35, 0b01100000000000, atau, 0,  pid, -50, 100, 120, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, hitam, 5, 35,  60, 140, 35, 0b00000000000110, atau, 0,  pid, 100, -50, 130, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  60, 310, 30, 0b01100000000000, atau, 0,  pid, -50, 100, 140, 0b01100000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 35,  60, 100, 55, 0b01100000000000, atau, 0, free,  49,  50, 210, 0b00000000001100, atau, 0); //8
    c(ctr++, 0, hitam, 4, 20,  40, 150, 40,               TM, atau, 0, pick,   0,   0, 120, 0b00000011000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  50,-100, 250, 0b00000000111111, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 140, 0b00000000111000, atau, 0); //11
    //11
  return ctr;
}

int DKPM(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-100,  60, 260, 0b11111100000000, atau, 0); //37
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50,  20,  90, 0b00000000111000, atau, 0); //38
    c(ctr++, 0, putih, 5, 45,  60, 505, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b00110000000000, atau, 0); //39
    c(ctr++, 0, putih, 4, 25,  70,1000, 60, 0b00000000000110, atau, 0, free,  50,  52,  70, 0b00000000001100, atau, 0); //40
    c(ctr++, 0, hitam, 5, 45,  40,  20, 20, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //41
    c(ctr++, 0, hitam, 5, 45,  50,  10, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b00110000000000, atau,10); //42
    c(ctr++, 0, hitam, 5, 45,  60, 370, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 130, 0b00000000001100, atau, 0); //43
    c(ctr++, 0, hitam, 6, 45,  50, 210, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //4
    c(ctr++, 0, hitam, 5, 45,  60,   0, 40,               TM, atau, 0, pick,   0,   0, 130, 0b00000011000000, atau, 0); //5
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0,  pid,  50,-105, 190, 0b00000000000111, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 120, 0b11000000000000, atau, 0); //7
    return ctr;
}     

int DMPB(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60, 330, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 100, 0b00000000001100, atau, 0); //1
    c(ctr++, 0, putih, 4, 30,  50, 360, 35, 0b01100000000000, atau, 0,  pid, 110, -50, 110, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, putih, 4, 35,  50, 170, 35, 0b01100000000000, atau, 0,  pid, -50, 100, 130, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 4, 30,  50, 350, 40, 0b01100000000000, atau, 0, free,  48,  50,  80, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, hitam, 4, 35,  20,  30, 15, 0b01100000000000, atau, 0,  pid, -50, 110, 100, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, hitam, 4, 35,  75, 310, 30, 0b00000000000110, atau, 0,  pid, 110, -50, 120, 0b00000000001100, atau, 0); //6
    c(ctr++, 0, hitam, 5, 35,  80, 290, 30, 0b01100000000000, atau, 0,  pid, -50, 100, 140, 0b01100000000000, atau, 0); //7
    c(ctr++, 0, hitam, 5, 35,  60, 100, 55, 0b01100000000000, atau, 0, free,  50,  50, 210, 0b00000000001100, atau, 0); //8
    c(ctr++, 0, hitam, 4, 30,  40, 155, 40,               TM, atau, 0, pick,   0,   0, 120, 0b00000011000000, atau, 0); //9
    c(ctr++, 0, hitam, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  50,-100, 250, 0b00000000111111, atau, 0); //10
    c(ctr++, 0, hitam, 5, 35,  60,   0, 40,               TM, atau, 0, free,  10,  40, 140, 0b00000000111000, atau, 0); //11
    
  return ctr;
}
    
int DMPK(int ctr) {
    c(ctr++, 0, putih, 4, 35,  60, 540, 40, 0b00000000000110, atau, 0,  pid, 110, -50, 140, 0b00000000001100, atau, 0); //3
    c(ctr++, 0, putih, 4, 35,  45, 150, 35, 0b11000000000000, atau, 0,  pid, -45, 120, 150, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, putih, 4, 40,  50, 610, 40,               TM, atau, 0, free,   0,   0,   0, 0b00000000111000, atau, 0); //5
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, pick,   0,   0,  80, 0b00000000111000, atau, 0); //6
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,  55,-105, 270, 0b00000000111111, atau, 0); //7
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  20,  50, 110, 0b00000000111000, atau, 0); //8
//7
    return ctr;
}

int DBS(int ctr) {
    c(ctr++, 0, hitam, 5, 35,  65, 220, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 120, 0b00110000000000, atau, 0); //23
    c(ctr++, 0, hitam, 5, 35,  60,   0, 50,               TM, atau, 0, free,  40,  50, 410, 0b00000011000000, atau, 0); //24
    //2
  return ctr;
}

int DKS(int ctr) {
    c(ctr++, 0, putih, 5, 35,  60,   0, 60,               TM, atau, 0,  pid,-100,  60, 270, 0b11111100000000, atau, 0); //37
    c(ctr++, 0, putih, 5, 35,  60,   0, 40,               TM, atau, 0, free,  50,  20,  90, 0b00000000111000, atau, 0); //38
    c(ctr++, 0, putih, 5, 45,  60, 505, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 130, 0b00110000000000, atau, 0); //39
    c(ctr++, 0, putih, 4, 25,  70,1000, 60, 0b00000000000110, atau, 0, free,  50,  52,  70, 0b00000000001100, atau, 0); //40
    c(ctr++, 0, hitam, 5, 45,  40,  15, 20, 0b01100000000000, atau, 0,  pid, -50, 120, 120, 0b00110000000000, atau, 0); //41
    c(ctr++, 0, hitam, 4, 35,  60,  80, 35, 0b00000000000110, atau, 0,  pid, 110, -50, 130, 0b00000000001100, atau, 0); //42
    c(ctr++, 0, hitam, 4, 35,  60, 300, 35,               TM, atau, 0, free,  60,  50, 380, 0b00000000001100, atau, 0); //43
    
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
    c(ctr++, 0, putih, 4, 35,  60, 315, 35, 0b00000000000110, atau, 0,  pid, -50, 110, 110, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 4, 35,  80, 340, 40, 0b01100000000000, atau, 0, free,  55,  50,  80, 0b00110000000000, atau, 0); //2
    c(ctr++, 0, hitam, 5, 35,  80, 250, 45, 0b00000000000110, atau, 0, free,  50,  50, 500, 0b00000000001100, atau, 0); //3
    //3
  return ctr;
}

void memory(int plan) {

  if (plan == 0) {
    int ctr = 0;    //ST
    cp[1] = 0;
    
//    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  51,  50, 200, 0b00110000000000, atau, 0); //0
//    c(ctr++, 0, hitam, 5, 30,  80, 550, 40, 0b01100000000000, atau, 0, free,  60,  60, 100, 0b00110000000000, atau, 0); //1
//    c(ctr++, 0, putih, 4, 30,  80, 580, 35, 0b01100000000000, atau, 0,  pid, -50, 110, 110, 0b00110000000000, atau, 0); //2
//    c(ctr++, 0, putih, 4, 35,  50, 140, 35, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //3
//    c(ctr++, 0, putih, 4, 35,  50, 120, 30, 0b00000000000110, atau, 0,  pid, 120, -50, 130, 0b00000000001100, atau, 0); //4
//    c(ctr++, 0, putih, 4, 35,  80, 135, 35, 0b01100000000000, atau, 0, free, -50, 100, 150, 0b00110000000000, atau, 0); //5
//    c(ctr++, 0, putih, 3,  5,  40,   0, 10,               TM, atau, 0, free,  45,  40, 150, 0b00110000000000, atau, 0); //6
//    c(ctr++, 0, hitam, 4, 35,  40,  25, 40, 0b00000000000110, atau, 0,  pid, 100, -45, 100, 0b00000000001100, atau, 0); //7
//    c(ctr++, 0, hitam, 3, 35,  50, 150, 33, 0b11000000000000, atau, 0,  pid, -50, 100, 120, 0b00110000000000, atau, 0); //8
//    c(ctr++, 0, hitam, 4, 40,  20, 150, 20, 0b00011000000000, atau, 0, free,   8,  20, 350, 0b00110000000000, atau,50); //9
//    c(ctr++, 0, hitam, 5,  5,   0,   0,  0,               TM, atau, 0, trow,   0,   0,   0, 0b00110000000000, atau, 0); //10
  
    c(ctr++, 0, hitam, 3,  5,  40,   0, 10,               TM, atau, 0, free,  50,  55, 200, 0b00110000000000, atau, 0); //0
    c(ctr++, 0, hitam, 5, 30,  80, 550, 40, 0b01100000000000, atau, 0, free,  50,  49,  90, 0b00110000000000, atau, 0); //1
    c(ctr++, 0, putih, 3, 20,  80, 640, 35, 0b01100000000000, atau, 0,  pid, 100, -45, 120, 0b00000000001100, atau, 0); //2
    c(ctr++, 0, putih, 4, 35,  50, 180, 40, 0b01100000000000, atau, 0,  pid, -50, 100, 130, 0b00110000000000, atau, 0); //3
    c(ctr++, 0, putih, 4, 40,  50, 350, 40, 0b11000000000000, atau, 0, free,  52,  50,  80, 0b00110000000000, atau, 0); //4
    c(ctr++, 0, hitam, 4, 40,  30,  30, 30, 0b11000000000000, atau, 0, free,  40,  42,  80, 0b00110000000000, atau, 0); //5
    c(ctr++, 0, hitam, 4, 40,  30, 150, 20, 0b01100000000000, atau, 0, free,   5,  13, 400, 0b00110000000000, atau,50); //9
    c(ctr++, 0, hitam, 5,  5,   0,   0,  0,               TM, atau, 0, trow,   0,   0,   0, 0b00110000000000, atau, 0); //10
  
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
    ctr = DBS(ctr);//2
    
    
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
