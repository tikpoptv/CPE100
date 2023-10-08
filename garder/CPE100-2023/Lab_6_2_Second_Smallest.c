#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0,j; i < n; i++)
    {
        scanf("%d", &j);
        input[i] = j;
    }
    int min=input[0],count=0,re=9999;
    for (int i = 0; i < n; i++)
    {
        if (min > input[i])
        {
            min = input[i];
        }        
    }
    for (int i = 0; i < n; i++)
        {
            if(input[i] != min && re > input[i])
            {
                re = input[i];
                count = i;
            }
        }
    printf("%d\n", re);
    printf("%d", count);
    return 0;
}