#include <stdio.h>
#include <string.h>

int main(void) {
    char c[100];
    int i = 0;
    float sum = 0.0;
    int count = 0;

    //config
    char messenger [] = "ป้อนตัวเลขหรือ \"exit\" เพื่อหยุด: ";


    while (strcmp(c, "exit") != 0) {
        printf("%s", messenger);
        scanf(" %s", c);

        int num;
        if (sscanf(c, "%d", &num) == 1) {
            sum += num;
            count++;
        } else if (strcmp(c, "exit") != 0) {
            printf("ข้อมูลไม่ถูกต้อง โปรด%s\n", messenger);
        }
    }

    if (count != 0) {
        printf("ค่าเฉลี่ย: %.2f\n", sum / count);
    } else {
        printf("none\n");
    }

    return 0;
}


