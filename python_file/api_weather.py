import os
import requests
import time
from datetime import datetime
from dotenv import load_dotenv

current_dir = os.path.dirname(os.path.abspath(__file__))
dotenv_path = os.path.join(current_dir, 'api.env')

load_dotenv(dotenv_path=dotenv_path)

API_KEY = os.getenv("OPENWEATHER_API_KEY")
LAT = "18.7883"
LON = "98.9853"

def fetch_and_print():
    if not API_KEY:
        print(f"DEBUG: กำลังหาไฟล์ที่ {dotenv_path}") 
        print("Error: ไม่พบ API_KEY ในไฟล์ api.env")
        return

    try:
        weather_url = f"https://api.openweathermap.org/data/2.5/weather?lat={LAT}&lon={LON}&appid={API_KEY}&units=metric"
        weather_res = requests.get(weather_url).json()

        air_url = f"https://api.openweathermap.org/data/2.5/air_pollution?lat={LAT}&lon={LON}&appid={API_KEY}"
        air_res = requests.get(air_url).json()

        temp = weather_res['main']['temp']
        humid = weather_res['main']['humidity']
        pm25 = air_res['list'][0]['components']['pm2_5']
        current_time = datetime.now().strftime("%H:%M:%S")

        print(f"[{current_time}] Temp : {temp}°C | Humi : {humid}% | PM2.5: {pm25} µg/m³")

    except Exception as e:
        print(f"[{datetime.now().strftime('%H:%M:%S')}] เกิดข้อผิดพลาด: {e}")

if __name__ == "__main__":
    print(f"--- เริ่มต้นการดึงข้อมูลเชียงใหม่ (ทุกๆ 5 นาที) ---")
    print("กด Ctrl + C เพื่อหยุดการทำงาน")
    print("-" * 50)
    
    while True:
        fetch_and_print()
        time.sleep(300)