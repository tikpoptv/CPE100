#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];
    int sum;

    while (1)
    {
        printf("Enter a string: ");
        scanf("%s", input);
        if (strcmp(input, "exit") == 0) {
            break;  // หยุดการรับค่าถ้าป้อน "exit"
        }
    }

    return 0;
}



// 1 2 3 4 exit
// (1 2 3 4)/2 = 2.5