#include <stdio.h>

int main() {
    int n;

    printf("ป้อนจำนวนชั้นของพีระมิด: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // พิมพ์ช่องว่างสำหรับส่วนบนของพีระมิด
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // พิมพ์ดอกจันสำหรับส่วนบนของพีระมิด
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        // ขึ้นบรรทัดใหม่
        printf("\n");
    }

    return 0;
}
