#include <stdio.h>
#include <math.h>

int main(void)
{
    int a;
    printf("length of array: ");
    scanf("%d", &a);
    int input[a], mode[a];
    int sum = 0, count = 0;

    for (int i = 0; i < a; i++)
    {
        printf("Enter number: ");
        scanf("%d", &input[i]);
        sum = sum + input[i];
        printf("%d \n", sum);
    }

    printf("%d", sizeof(input[2] - input[0]));
    //int length = sizeof(input) / sizeof(input[0]);



    
}

/*

loop จำนวน

ถ้ามันเป็นตัวเดียวกัน ให้นับเพิ่ม







*/