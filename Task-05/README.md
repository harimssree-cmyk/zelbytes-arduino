## Test Log – Full Irrigation Cycle

### Test Setup
- Soil Threshold: 400
- Irrigation Time: 5 seconds
- Cooldown Time: 10 seconds
- DHT11 Sensor: Working normally

### Serial Monitor Output

```text
System Started
STATE -> IDLE

Soil Moisture: 945
Dry Soil Detected
STATE -> IRRIGATING

Soil Moisture: 940
Soil Moisture: 938
Soil Moisture: 935

Watering Complete
STATE -> COOLDOWN

Soil Moisture: 850
Soil Moisture: 840

Cooldown Complete
STATE -> IDLE
```

### State Sequence

```text
IDLE
  ↓
IRRIGATING
  ↓
COOLDOWN
  ↓
IDLE
```

### Expected Behavior
- Dry soil (>400) detected in IDLE state.
- Relay turns ON and irrigation starts.
- Irrigation runs for 5 seconds.
- Relay turns OFF and system enters COOLDOWN.
- Cooldown lasts for 10 seconds.
- System returns to IDLE.

### Result
✅ PASS – One complete irrigation cycle executed successfully.
