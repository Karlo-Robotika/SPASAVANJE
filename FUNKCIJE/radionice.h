#pragma once
#include "helper.h"


void RobotLine::radionica()
{
  static int ras = 0;
  static uint32_t ms = 0;
  if (setup()) {
    ms = millis();
  }

  if (line(0) && line(8)) {
    stop();
    delayMs(500);
    go(-90, 90);
    delayMs(500);
    ras = 1;
  }

  if (ras == 1) {
    go (60, 60);
  }
  else if (millis() - ms > 199) {
    stop();
    delayMs(500);
  }

  if (line(8))
    go(-90, 90);
  else if (line(0))
    go(90, -90);
  else if (line(7))
    go(0, 100);
  else if (line(1))
    go(100, 0);
  else if (line(6))
    go(30, 80);
  else if (line(2))
    go(80, 30);
  else if (line(5))
    go(40, 70);
  else if (line(3))
    go(70, 40);
  else if (line(4))
    go(70, 70);
  else
    go(70, 70);

}
    go(90, 90);
    delayMs(200);
    dua=1;

  }


  
else if (line(0) && line(8) &&   pitch() < 10 && pitch()>2) {
    go(50, 50);
    delayMs(300);
    armOpen();

  }
  
else if (line(0) && line(8) && dua==0) {
    go(-90, 90);
    delayMs(500);

  }
else{
  nigerija();
  
}*/

wallsFollowRight();

 if (front() < 130) {
    go(-90, 90);
    delayMs(500);

}

  if (frontLeft() < 160 and ball==0) {
    go(90, 90);
    delayMs(250);
    go(-90, 90);
    delayMs(500);
    go(60, 60);
    delayMs(1000);
    armClose();
    go(90, -90);
    delayMs(500);
      go(90, -90);
    delayMs(500);
      go(60, 60);
    delayMs(1000);
     go(-90, 90);
    delayMs(500);
    ball=1;

  }
if (lineAny() and ball==1){
  armOpen();a
  ball=0;
}

}
