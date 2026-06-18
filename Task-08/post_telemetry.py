import csv
import requests

# Read API key from secrets.h

API_KEY = ""

with open("secrets.h", "r") as file:

    for line in file:

        if "#define IOT_API_KEY" in line:

            API_KEY = line.split('"')[1]

            break

if API_KEY == "":

    print("API key not found")

    exit()

url = "https://careers.zelbytes.com/api/iot-lab/v1/telemetry"

headers = {
    "Authorization": f"Bearer {API_KEY}",
    "Content-Type": "application/json"
}

with open("sensor_log.csv", "r") as file:

    reader = csv.DictReader(file)

    for row in reader:

        payload = {
            "temperature_c": float(row["temp"]),
            "humidity_pct": float(row["humidity"]),
            "soil_moisture_pct": int(row["soil"]),
            "light_pct": int(row["light"])
        }

        response = requests.post(
            url,
            headers=headers,
            json=payload,
            timeout=10
        )

        print("Status:", response.status_code)

        print(response.text)