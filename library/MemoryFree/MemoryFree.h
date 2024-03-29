/*****************
*  Author: mem
*  Source: http://forum.arduino.cc/index.php?PHPSESSID=jbd9v8sv2re9s9n7j15o8e8r50&topic=27536.15
*****************/

// memoryFree header

#ifndef      MEMORY_FREE_H
#define MEMORY_FREE_H

#if ARDUINO >= 100
 #include "Arduino.h"	  //all things wiring / arduino
#else
 #include "WProgram.h"
#endif

#ifdef __cplusplus
extern "C" {
#endif

int freeMemory();

#ifdef  __cplusplus
}
#endif

#endif
