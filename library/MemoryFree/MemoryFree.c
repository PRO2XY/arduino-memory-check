/*
 * Source: http://forum.arduino.cc/index.php?PHPSESSID=jbd9v8sv2re9s9n7j15o8e8r50&topic=27536.15
 * Author: mem
 * MemoryFree.c
 * returns the number of free RAM bytes
*/


#include "MemoryFree.h"

extern unsigned int __data_start;
extern unsigned int __data_end;
extern unsigned int __bss_start;
extern unsigned int __bss_end;
extern unsigned int __heap_start;
extern void *__brkval;


int freeMemory()
{
  int free_memory;

  if((int)__brkval == 0)
     free_memory = ((int)&free_memory) - ((int)&__bss_end);
  else
    free_memory = ((int)&free_memory) - ((int)__brkval);

  return free_memory;
}
