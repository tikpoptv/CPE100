#include <stdio.h>

void Prime(int input, int end)
{
    int i, j;
    int p, count = 0;
    for (i = input; i <= end; i++)
    {
        p = 1;
        if (i <= 1)
        {
            p = 0;
        }
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                p = 0;
                break;
            }
        }
        if (p == 1)
        {
            printf("%d\n", i);
            count++;
        }
    }
    if (count == 0)
    {
        printf("None");
    }
}

int main()
{
    int input, end;
    scanf("%d\n%d", &input, &end);
    Prime(input, end);

    return 0;
}