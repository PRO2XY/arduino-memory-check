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


=========

Another comment from arduino forum:

Note that on the mega168, RAM is also used to hold the stack, so your global variables are at the beginning of RAM, the heap (the dynamically allocated variables created with malloc()) grows outwards from the end of the global variable space, and the stack grows from the end of RAM towards the heap/global space.

When you're writing a program, you need to make sure you leave plenty of RAM for the stack.  All non-static local variables are put on the stack, and nested functions will grow the stack.  If the stack ever overruns the data in the heap or the global space, you will run into problems, so one crucial thing to know about your program is the maximum amount of stack space it will use.
