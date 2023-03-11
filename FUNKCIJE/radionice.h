#pragma once
 #include "helper.h"


void RobotLine::radionica()
{
static int shrek=0;
static int dua=0;
nigerija();


if (line(0) && line(8) &&   pitch() < -10) {
    go(90, 90);
    delayMs(200);
    dua=1;

  }


  
else if (line(0) && line(8) &&   pitch() < 10 && pitch()>2) {
    go(50, 50);
    delayMs(300);

  }
  
else if (line(0) && line(8) && dua==0) {
    go(-90, 90);
    delayMs(500);

  }

if(front(3)<120 and front(3)>50 and (pitch()>-2 and pitch()<2) and shrek == 0) {
    go(-90, 90);
    delayMs(500);
    
    
 while (not lineAny()) {
    go(40, 10);

    noLoopWithoutThis();
  }
  go(50,50);
  delayMs(200);
 go(-60, 60);
 delayMs(500);
 shrek++;
}

}
