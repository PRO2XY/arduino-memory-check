/*******************
 * Author: mem
 * Source: http://forum.arduino.cc/index.php?PHPSESSID=jbd9v8sv2re9s9n7j15o8e8r50&topic=27536.15
 ******************/
 
 #include <MemoryFree.h>

void setup()                    // run once, when the sketch starts
{
  Serial.begin(9600);
}

void loop()                     // run over and over again
{
  Serial.print("freeMemory() reports ");
  Serial.println( freeMemory() );
}
