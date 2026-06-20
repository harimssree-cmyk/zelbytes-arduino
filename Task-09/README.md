# Task 9 – Automated Grow-Bench Prototype



## Objective



Develop an automated irrigation system using ESP32 and a soil moisture sensor. The system automatically controls a water pump through a relay based on soil moisture levels while supporting manual override, cloud telemetry upload, and dashboard monitoring.



## Features



- Automatic irrigation based on soil moisture threshold

- Manual override using push button

- Relay-controlled water pump

- Serial command interface

- ESP32 web server for relay control

- Zelbytes IoT Lab cloud telemetry upload

- Streamlit dashboard for monitoring and logging

- Soil moisture history chart



## Hardware Components



- ESP32 Development Board

- Soil Moisture Sensor

- Relay Module

- Push Button

- LED Indicator


- Jumper Wires

- USB Cable



## Pin Configuration



| Component | ESP32 Pin |

|------------|------------|

| Soil Moisture Sensor | GPIO34 |

| Relay Module | GPIO26 |

| Push Button | GPIO27 |

| LED Indicator | GPIO2 |



## Working Principle



The ESP32 continuously reads soil moisture values from the sensor. When the soil becomes dry and crosses the defined threshold, the relay automatically activates the water pump. When adequate moisture is detected, the relay turns the pump OFF.



A push button provides manual override functionality. The system also supports serial commands for monitoring and controlling pump operation.



The ESP32 hosts a web server that allows relay control through a Streamlit dashboard. Soil moisture readings are uploaded to the Zelbytes IoT Lab cloud API for remote monitoring and logging.



## Serial Commands



### STATUS



Displays:



- Soil moisture percentage

- Pump status

- Operating mode



### FORCE\_ON



Turns the pump ON manually.



### FORCE\_OFF



Turns the pump OFF manually.



## Dashboard Features



- Live soil moisture percentage display

- Moisture level progress bar

- Relay ON control

- Relay OFF control

- Relay status monitoring

- Previous log display

- Soil moisture history graph



## Software Requirements



- Streamlit

- Requests

- Pandas



## Testing Performed



### Automatic Mode Test



Dry soil condition successfully activated the relay and water pump.



### Manual Override Test



Push button successfully toggled relay state.



### Serial Command Test



STATUS, FORCE\_ON, and FORCE\_OFF commands executed correctly.



### Dashboard Test



Dashboard displayed live soil moisture readings and relay controls functioned properly.



### Cloud Telemetry Test



Soil moisture data was successfully uploaded to the Zelbytes IoT Lab API.



## Results



The automated grow-bench prototype successfully monitored soil moisture, controlled irrigation automatically, supported manual override, uploaded telemetry data to the cloud, and provided real-time dashboard monitoring.





## Conclusion



The project successfully demonstrates an IoT-enabled automated irrigation system using ESP32. The solution improves water management through automatic control, cloud connectivity, and real-time monitoring.



## Note



For security reasons, Wi-Fi credentials and API keys should not be committed to public repositories. Replace sensitive information with placeholder values before uploading to GitHub.

