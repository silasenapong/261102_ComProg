import requests
import time
import os
from dotenv import load_dotenv 

load_dotenv(dotenv_path="api.env")


API_KEY = os.getenv("OPENWEATHER_API_KEY")
LAT = "18.7883"
LON = "98.9853"

# คำนวณเวลา Unix Timestamp (เวลาปัจจุบัน และ ย้อนหลังไป 24 ชม.)
end_time = int(time.time())
start_time = end_time - (24 * 3600) 

url = f"https://api.openweathermap.org/data/2.5/air_pollution/history?lat={LAT}&lon={LON}&start={start_time}&end={end_time}&appid={API_KEY}"

res = requests.get(url).json()

for data in res['list']:
    dt = time.strftime('%Y-%m-%d %H:%M:%S', time.localtime(data['dt']))
    pm25 = data['components']['pm2_5']
    print(f"เวลา: {dt} | PM2.5: {pm25} µg/m³")