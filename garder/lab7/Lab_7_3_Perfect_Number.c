#include <stdio.h>

void Perfect_Num(int input, int end)
{
    int count = 0;
    for (int i = input; i <= end; i++)
    {

        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
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

int main(void)
{
    int input, end;
    scanf("%d", &input);
    scanf("%d", &end);
    if (input == 0)
    {
        input++;

    }
    
    Perfect_Num(input,end);

    return 0;
}

