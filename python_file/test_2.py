def calculate_fire_time():
    positions = []
    last_pos = -1
    
    print("กรุณาใส่ตำแหน่งที่จุดไฟ (0-100) จากน้อยไปมาก (ใส่เลขไม่อยู่ในช่วง 0-100 หรือเลข 100 เพื่อจบ):")
    
    while True:
        try:
            current_pos = float(input(f"ใส่ตำแหน่งที่จุดไฟ (ต้องมากกว่า {last_pos}): "))
            
            # ตรวจสอบเงื่อนไขหยุดการทำงาน
            if current_pos < 0 or current_pos > 100:
                break
            
            # ตรวจสอบลำดับการป้อนข้อมูล
            if current_pos <= last_pos:
                print(f"ค่าต้องมากกว่า {last_pos} กรุณาใส่ใหม่")
                continue
            
            positions.append(current_pos)
            last_pos = current_pos
            
            if current_pos == 100:
                break
                
        except ValueError:
            print("กรุณาใส่ตัวเลขเท่านั้น")

    if not positions:
        print("ไม่มีข้อมูลการจุดไฟ")
        return

    # คำนวณระยะทางที่ยาวที่สุดที่ไฟต้องลาม
    max_dist = 0
    
    # 1. ระยะจากจุดเริ่ม 0 ถึงจุดแรก
    max_dist = max(max_dist, positions[0] - 0)
    
    # 2. ระยะจากจุดสุดท้าย ถึงปลาย 100
    max_dist = max(max_dist, 100 - positions[-1])
    
    # 3. ระยะห่างระหว่างจุดที่จุดไฟ (หาร 2 เพราะไฟลามเข้าหากัน)
    for i in range(len(positions) - 1):
        gap_dist = (positions[i+1] - positions[i]) / 2
        max_dist = max(max_dist, gap_dist)

    # คำนวณเวลา (ระยะทาง / ความเร็ว 10 cm/s)
    total_time = max_dist / 10
    print("-" * 30)
    print(f"ตำแหน่งที่จุดไฟ: {positions}")
    print(f"เวลาที่ใช้ลามทั่วทั้งเส้น: {total_time:.2f} วินาที")

if __name__ == "__main__":
    calculate_fire_time()