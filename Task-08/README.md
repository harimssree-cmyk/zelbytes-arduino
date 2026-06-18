\#Task 8 - IoT Lab Telemetry Integration

\##Overview

This task implements posting of bench sensor telemetry data (temperature, humidity, soil moisture, CO2) from an Arduino Uno to the Zelbytes IoT Learning Lab cloud dashboard, using a Python script running on the host machine to bridge Serial CSV data to the cloud API.



\##Files

telemetry.py — Python script reading Serial CSV from Arduino and posting to IoT Lab

secrets.h.example — Template for required API key and device ID (real values excluded from repo)

docs/IOT\_LAB.md — Full documentation of API integration and field mapping

images/dashboard\_screenshot.png — Proof of successful data transmission and dashboard visibility

\##How to Run

Copy secrets.h.example to secrets.h and fill in your real API key and device ID

Connect Arduino Uno via USB and confirm the correct COM port in telemetry.py

\##Run the script:

Verify successful POST responses (status 202) in the terminal

Check IoT Lab → API Explorer to confirm new data points

\##Result

10 telemetry samples were successfully posted under device\_id krishnaas\_bench01

Each request returned HTTP status 202

Data was confirmed visible in the IoT Lab dashboard/API Explorer



