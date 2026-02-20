#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author rishabh-rb
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

// TODO 1:
// Define FSR analog pin (Use A0)
#define FSR_PIN A0

// TODO 2:
// Create variable to store sensor reading
int fsrValue = 0;

// Threshold value (adjust based on experiment)
int threshold = 200;

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)
    Serial.begin(9600);

    // TODO 4:
    // Print system initialization message
    Serial.println("FSR Force Measurement System - Initialized");
    delay(1000);
}

void loop() {

    // TODO 5:
    // Read analog value from FSR
    fsrValue = analogRead(FSR_PIN);

    // TODO 6:
    // Print raw ADC value
    Serial.print("FSR Value: ");
    Serial.println(fsrValue);

    // TODO 7 & 8:
    // Apply simple threshold logic (detect pressure)
    if (fsrValue > threshold) {
        Serial.println("Pressure Detected");
    } else {
        Serial.println("No Significant Pressure");
    }

    Serial.println("-----------------------------");

    // TODO 9:
    // Add delay (1 second)
    delay(1000);
}