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

void setup() {

}

void loop() {

}