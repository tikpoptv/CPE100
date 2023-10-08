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
    printf("%.2f\n", (float)sum / a);

    int length = sizeof(input) / sizeof(input[0]);

    printf("length = %d\n", length);

    int mostFrequent = input[0];
    int maxCount = 1;         
    int currentCount = 1;    

    for (int i = 0; i < length; i++)
    {
        currentCount = 1;
        for (int j = i + 1; j < length; j++)
        {
            if (input[i] == input[j])
            {
                currentCount++;
            }
        }

        if (currentCount >= maxCount)
        {
            maxCount = currentCount;
            mostFrequent = input[i];
        }
    }

    if (maxCount >= 2)
    {
        printf("ตัวเลขที่ซ้ำกันมากที่สุด: %d\n", mostFrequent);
    }
    else
    {
        printf("none\n"); 
    }

    // printf("count = %d\n", count);
    // for (int i = 0; i < mode[i]; i++)
    // {printf("on loop1 \n");

    //     for (int j = 0; j < mode[j]; j++)
    //     {printf("on loop2 \n");

    //         if (input[i] == input[j])
    //         {printf("on if \n");

    //             count++;
    //             mode[i] = count;
    //             printf("count = %d\n", count);
    //         }
    //     }

    // }

    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d ", input[i]);
    // }
}

/*

loop จำนวน

ถ้ามันเป็นตัวเดียวกัน ให้นับเพิ่ม







*/