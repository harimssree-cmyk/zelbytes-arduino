\# IoT Lab Integration



\## Objective



Upload Arduino sensor telemetry data from a CSV file to the Zelbytes IoT Learning Lab using a Python host script.



\## Device Information



Device ID: bench-ZEL-DDWDL



Board: Arduino Uno



\## Hardware Used



\* DHT11 temperature and humidity sensor

\* Soil moisture sensor

\* LDR (light sensor)



\## Data Flow



Arduino Sensors → Serial CSV → sensor\_log.csv → Python Script → Zelbytes IoT Lab Cloud



\## API Details



Protocol: HTTPS



Endpoint:



/api/iot-lab/v1/telemetry



\## CSV to JSON Mapping



| CSV Column | Cloud Field       |

| ---------- | ----------------- |

| timestamp  | timestamp\_ms      |

| temp       | temperature\_c     |

| humidity   | humidity\_pct      |

| soil       | soil\_moisture\_pct |

| light      | light\_pct         |



\## Security



\* API key stored in secrets.h

\* secrets.h is excluded from GitHub

\* secrets.h.example is uploaded instead of secrets.h



\## Verification



The Python script successfully uploaded telemetry data to Zelbytes IoT Lab.



Server Response:



HTTP Status: 202 Accepted



The uploaded data was verified using the IoT Lab Dashboard/API Explorer.



\## Files Used



\* sensor\_log.csv

\* post\_telemetry.py

\* secrets.h

\* secrets.h.example

\* docs/IOT\_LAB.md



