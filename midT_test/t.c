#include <stdio.h>
#include <string.h>

int main() {
    char input[100]; // สร้างอาร์เรย์ของตัวอักษรเพื่อเก็บค่าที่ป้อน

    printf("ป้อนค่า: ");
    fgets(input, sizeof(input), stdin); // รับค่าที่ป้อนจากผู้ใช้

    // ตรวจสอบว่าค่าที่ป้อนเป็นค่าว่างหรือไม่
    if (strlen(input) == 1 && input[0] == '\n') {
        printf("ค่าว่าง\n");
    } else {
        printf("ค่าไม่ว่าง\n");
        // ดำเนินการต่อไป
    }

    return 0;
}
