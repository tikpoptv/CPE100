#include <stdio.h>

#define TRUE 1
#define FALSE 0

int isLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return TRUE;
    } else {
        return FALSE;
    }
}

int isValidDate(int date, int month, int year) {
    int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) {
        daysInMonth[1]++; // Increment the number of days for February in a leap year
    }

    if (month >= 1 && month <= 12) {
        if (date >= 1 && date <= daysInMonth[month - 1]) {
            return TRUE;
        }
    }

    return FALSE;
}

void inputDate() {
    int date, month, year;

    printf("Enter the date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &date, &month, &year);

    if (isValidDate(date, month, year)) {
        printf(">> Input date is valid.\n");
    } else {
        printf(">> Input date is invalid. Enter a valid date again.\n");
        inputDate(); // เรียกใช้ฟังก์ชันเองเพื่อรับวันที่ใหม่
    }
}

int main() {
    inputDate();
    return 0;
}
