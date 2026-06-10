# Irrigation State Machine

## States

### IDLE
- Valve OFF
- Monitor soil moisture
- Transition to IRRIGATING when moisture drops below SOIL_MIN

### IRRIGATING
- Valve ON
- Water plants
- Transition to COOLDOWN when:
  - Moisture exceeds SOIL_TARGET, or
  - Maximum irrigation time is reached

### COOLDOWN
- Valve OFF
- Wait for cooldown period
- Transition to IDLE when cooldown timer expires

### FAULT
- Valve OFF
- Entered when sensor read fails 3 consecutive times
- Irrigation disabled until system reset

---

## State Diagram

```text
                 +-------+
                 | IDLE  |
                 +-------+
                     |
                     | moisture < SOIL_MIN
                     v
             +---------------+
             | IRRIGATING    |
             +---------------+
                     |
                     | moisture > SOIL_TARGET
                     | OR max runtime reached
                     v
              +-------------+
              | COOLDOWN    |
              +-------------+
                     |
                     | cooldown complete
                     v
                 +-------+
                 | IDLE  |
                 +-------+

Sensor failure (3 consecutive failures)
from any state:

      +-------+
      |FAULT  |
      +-------+

Valve OFF
Manual reset required
```

## Thresholds

```cpp
SOIL_MIN = 25;
SOIL_TARGET = 40;

MAX_RUN_MS = 30000;
COOLDOWN_MS = 10000;

MAX_SENSOR_FAILURES = 3;
```

## Safety Notes

- Supervised wet testing only.
- Emergency stop must remain functional.
- Valve automatically stops after maximum runtime.
- No unattended operation on live plumbing.
