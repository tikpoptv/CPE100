#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
       // printf("1");
        for (int j = 0; j < n; j++)
        {
           // printf("2");
            if (input[i] == input[j])
            {
                count++;
            }
            
        }
        if (count == 1)
        {
            printf("%d\n", input[i]);
        }
        
        
        
    }
    
    
}