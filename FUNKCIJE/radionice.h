#pragma once
 #include "helper.h"


void RobotLine::radionica()
{
nigerija();

 if (line(0) && line(8)) {
    go(-90, 90);
    delayMs(500);

  }

 
  if (front() < 120) {
    go(-90, 90);
    delayMs(500);
    go(90, -90);
    delayMs(500);
    go(60, 60);
    delayMs(500);
    go(90, -90);
    delayMs(500);
    go(60, 60);
    delayMs(500);
    go(-90, 90);
    delayMs(500);

  }

}
