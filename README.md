arduino-memory-check
====================

Code from Pololu Forum

checkMem.c - returns the number of bytes of free memory (RAM)

Arduino Playground code (see below): http://www.arduino.cc/playground/Code/AvailableMemory

=======

Comment from arduino forum:

Calculating memory availability is tricky. The test on that link  does not seem to give reliable results for the memory available to malloc, so if using code or libraries that call malloc then the memory test in the Arduino playground is better.  

If there are no calls to malloc then the Pololu code is better because that test consumes an insignificant amount of memory compared to the call to malloc just for the playground test.

I expect both tests suffer from inaccuracy if the memory pool gets fragmented

FYI, the Pololu code needed to be changed from
  extern void __bss_end;
to
   extern int __bss_end;   

to compile in my arduino environment


