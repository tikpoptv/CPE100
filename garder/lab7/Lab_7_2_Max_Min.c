#include <stdio.h>

void max_min();

int main(void){
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    max_min(input, n);
    
    return 0;
}

void max_min(int input[],int size){
    int max=input[0], min=input[0];
    for (int i = 0; i < size; i++)
    {
        if (min > input[i])
        {
            min = input[i];
        }
        if (max < input[i])
        {
            max = input[i];
        }
        
    }
    printf("%d\n%d", max,min);
    
}


