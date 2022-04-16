void memory(int plan) {

  if (plan == 0) {
    int ctr = 0;    //ST
    cp[1] = 0;
    //ctr++     garis  kp   kd  spd1  tmr   spd2       sensor           break    mode    kr      kn  delay        pid2           sensi
    c(ctr++, 0, hitam, 5,  10,  40,   200,   50,               TM, atau, 0,     free,   100,    100,  100,    0b00110000000000,   atau, 0); //0
    c(ctr++, 0, hitam, 5,  10,  60,   400,   60,  0b0110000000000, atau, 0,      pid,   -60,    150,  110,    0b11000000000000,   atau, 0); //1
    c(ctr++, 0, hitam, 5,  10,  60,   200,   60,  0b0000000000011, atau, 0,      pid,   150,    -60,  110,    0b00000000000011,   atau, 0); //2
    c(ctr++, 0, putih, 5,  10,  60,   600,   60,  0b1100000000000, atau, 0,      pid,   -60,    150,  110,    0b11000000000000,   atau, 0); //3
    c(ctr++, 0, putih, 5,  10,  60,   100,   60,  0b1100000000011,  dan, 0,     free,   100,    100,  250,    0b00000000000011,   atau, 0); //4
    c(ctr++, 0, putih, 5,  10,  60,     0,   60,               TM, atau, 0,     free,    60,   -150,  300,    0b11000000000000,   atau, 0); //3
    
 
  }
}
