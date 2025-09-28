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

#define LED_PIN PC13

#define CYCLETIME 500

void setup()
{
    Serial.begin(115200);
    delay(1000);
    Serial.println("\nHellooo BluePill!!!\n\n");
    pinMode(LED_PIN, OUTPUT);
}

uint8_t counter = 0;
uint32_t lastcall = 0;

void loop()
{
    if (millis() - lastcall > CYCLETIME)
    {
        lastcall = millis();
        digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        Serial.println(counter++);
    }
}
// ======================================================================================================
// ***************************************** END OF FILE ************************************************
// ======================================================================================================