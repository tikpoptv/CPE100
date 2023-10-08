#include <stdio.h>

int is_valid_date(int day, int month, int year) {
    if (year >= 1900 && year <= 9999) {
        if (month >= 1 && month <= 12) {
            if ((day >= 1 && day <= 31) &&
                (month == 1 || month == 3 || month == 5 || month == 7 ||
                 month == 8 || month == 10 || month == 12)) {
                return 1; // วันที่ถูกต้อง
            } else if ((day >= 1 && day <= 30) &&
                       (month == 4 || month == 6 || month == 9 || month == 11)) {
                return 1; // วันที่ถูกต้อง
            } else if ((day >= 1 && day <= 28) && (month == 2)) {
                return 1; // วันที่ถูกต้อง
            } else if (day == 29 && month == 2 &&
                       (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) {
                return 1; // วันที่ถูกต้อง (ปีอธิกสุรทิน)
            } else {
                return 0; // วันที่ไม่ถูกต้อง
            }
        } else {
            return 0; // วันที่ไม่ถูกต้อง
        }
    } else {
        return 0; // วันที่ไม่ถูกต้อง
    }
}

int main() {
    int day, month, year;
    int valid = 0;

    while (!valid) {
        printf("ป้อนวันที่ (DD/MM/YYYY): ");
        scanf("%d/%d/%d", &day, &month, &year);

        valid = is_valid_date(day, month, year);

        if (valid) {
            printf("วันที่ถูกต้อง\n");
        } else {
            printf("วันที่ไม่ถูกต้อง โปรดป้อนวันที่ใหม่\n");
        }
    }

    return 0;
}
