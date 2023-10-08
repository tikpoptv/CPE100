#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n >= 1 && n <= 100){
    }else{
        return 0;
    }
    int input[n];
    for (int i = 0,j; i < n; i++)
    {
        scanf("%d", &j);
        if (-1000<=j && j<=1000)
        {
            input[i] = j;
        }else{
            return 0;
        }
    }
    int temp=input[0],count=0;
    for (int i = 0; i < n; i++)
    {
        if (temp < input[i])
        {
            temp = input[i];
            count = i;
        }
        
    }
    printf("%d\n", temp);
    printf("%d", count);
    


    return 0;
}