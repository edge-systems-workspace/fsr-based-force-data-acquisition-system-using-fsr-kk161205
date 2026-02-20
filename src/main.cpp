#include <Arduino.h>

/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Kushagra Kulshrestha
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

/* ===========================
   Global Definitions
   =========================== */

/** @brief Analog pin connected to FSR */
const uint8_t FSR_PIN = A0;

/** @brief Variable to store raw ADC reading */
uint16_t fsrRawValue = 0;
/** @brief Threshold value to detect applied pressure */
const uint16_t PRESSURE_THRESHOLD = 100;

void setup() {

    /**
     * @brief Initializes serial communication
     */
    Serial.begin(9600);

    while (!Serial) {
        ; // Wait for Serial (recommended for Uno R4)
    }

    /**
     * @brief System startup message
     */
    Serial.println("=================================");
    Serial.println(" Embedded Force Measurement System ");
    Serial.println(" FSR Sensor Initialized ");
    Serial.println("=================================");
}

void loop() {

    fsrRawValue = analogRead(FSR_PIN);

    Serial.println("-----------------------------");
    Serial.print("Raw ADC Value: ");
    Serial.println(fsrRawValue);

    if (fsrRawValue > PRESSURE_THRESHOLD) {
        Serial.println("Status: PRESSURE DETECTED");
    } else {
        Serial.println("Status: NO PRESSURE");
    }

    Serial.println("-----------------------------\n");

    /**
     * @brief Sampling delay (500 ms)
     */
    delay(500);
}