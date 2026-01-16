#include <iostream>
#include <algorithm> // สำหรับ std::max

// ปรับให้ input คืนค่าจำนวนจุดที่กรอกจริง (count)
int input(int position[]);
void show(int position[], int count);
void cal(int position[], int count);

int main()
{
    int position[100] = {0};

    int count = input(position); // รับค่า count มาใช้ต่อ
    show(position, count);
    cal(position, count);

    return 0;
}

int input(int position[])
{
    int current_position = 0, last_position = -1, count = 0;

    while (true)
    {
        std::cout << "Input the burner location: ";
        std::cin >> current_position;

        // เงื่อนไขหยุด: นอกช่วง 0-100
        if (current_position < 0 || current_position > 100)
        {
            break;
        }

        // เงื่อนไข: ต้องมากกว่าค่าก่อนหน้า (ใช้ -1 เพื่อให้รับ 0 ได้)
        if (current_position <= last_position)
        {
            std::cout << "Next location must be greater than " << last_position << ".\n";
            continue;
        }

        position[count] = current_position;
        last_position = current_position;
        count++;

        // เงื่อนไขหยุด: ถึงปลายเชือก
        if (current_position == 100)
        {
            break;
        }
    }
    return count; // ส่งจำนวนจุดที่บันทึกได้กลับไป
}

void show(int position[], int count)
{
    std::cout << "\n--- Burn Positions ---" << std::endl;
    for (int i = 0; i < count; i++)
    {
        std::cout << "Position " << i + 1 << " is : " << position[i] << " cm" << std::endl;
    }
}

void cal(int position[], int count)
{
    if (count == 0)
        return;

    // หา distance ที่ไกลที่สุดที่ไฟต้องลามไปถึง
    // 1. ระยะจากจุดแรกไปถึงหัวเชือก (0 cm)
    double max_dist = (double)position[0];

    // 2. ระยะจากจุดสุดท้ายไปถึงปลายเชือก (100 cm)
    max_dist = std::max(max_dist, (double)(100 - position[count - 1]));

    // 3. ระยะระหว่างจุดที่ไฟลามหากัน (หาร 2 เพราะลามเข้าหากันคนละครึ่งทาง)
    for (int i = 0; i < count - 1; i++)
    {
        double gap = (position[i + 1] - position[i]) / 2.0;
        max_dist = std::max(max_dist, gap);
    }

    // เวลา = ระยะทาง / ความเร็ว (10 cm/s)
    double time = max_dist / 10.0;

    std::cout << "----------------------" << std::endl;
    std::cout << "Total time: " << time << " seconds" << std::endl;
}