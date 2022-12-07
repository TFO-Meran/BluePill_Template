/*
 * ---- Project Template ----
 * 
 * by CGProjects
 *  
 *
 */

// ======================================================================================================
// ********************************* PROJECT TEMPLATE: MAIN *********************************************
// ======================================================================================================

#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN PC13
#endif

void setup()
{
  // Serial.begin(115200);
  Serial.begin(115200);
  // initialize LED digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(LED_BUILTIN, HIGH);
  // wait for a second
  delay(100);
  // turn the LED off by making the voltage LOW
  digitalWrite(LED_BUILTIN, LOW);
  // wait for a second
  delay(900);
  Serial.println("STM32 READY!!!");
}
// ======================================================================================================
// ***************************************** END OF FILE ************************************************
// ======================================================================================================