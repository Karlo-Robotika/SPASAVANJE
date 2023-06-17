#pragma once
#include "helper.h"


void RobotLine::radionica()
{
  if (line(1) and line(7)) {
    go(-90, 90);
    delayMs(550);
  }
  lineFollow();

}
