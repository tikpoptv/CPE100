#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }

    for (int i = 1; i < n; i++)
    {
        if (input[i]<input[i-1])
        {
            printf("%d\n", i-1);
            break;
        }
        
    }
    
    
}