#include <stdio.h>

int main() {
    unsigned long long num;
    printf("ป้อนจำนวนฐาน 10: ");
    scanf("%llu", &num);

    if (num == 0) {
        printf("0");  // จัดการกรณีที่เลขฐาน 10 เป็น 0
        return 0;
    }

    int binaryDigits[64]; // สำหรับเก็บตัวเลขทุกหลักของเลขฐาน 2
    int numDigits = 0;

    while (num > 0) {
        binaryDigits[numDigits] = num % 2;
        num /= 2;
        numDigits++;
    }

    // พิมพ์ผลลัพธ์แปลงเป็นเลขฐาน 2
    printf("เลขฐาน 2: ");
    for (int i = numDigits - 1; i >= 0; i--) {
        printf("%d", binaryDigits[i]);
    }

    return 0;
}
