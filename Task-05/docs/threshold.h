#ifndef THRESHOLDS_H
#define THRESHOLDS_H

// Moisture thresholds (%)
const int SOIL_MIN = 25;      // Start irrigation below this
const int SOIL_TARGET = 40;   // Stop irrigation above this

// Timing settings
const unsigned long MAX_RUN_MS = 30000;   // 30 seconds max irrigation
const unsigned long COOLDOWN_MS = 10000;  // 10 seconds cooldown

// Sensor fault settings
const int MAX_SENSOR_FAILURES = 3;  // Enter FAULT after 3 failures

#endif
