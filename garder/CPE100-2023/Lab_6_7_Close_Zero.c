#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    int count=9999,Num,m1,m2;
    for (int i = 0; i < n; i++)
    {
       // printf("1");
        for (int j = i+1; j < n; j++)
        {
           // printf("input 1 = %d input 2 = %d\n", input[i],input[j]);
            Num = input[i] + input[j];
            if (Num < 0)
            {
                Num *= -1;
            }
            
         //   printf("Num = %d\n", Num);
            if (Num < count)
            {
                count = Num;
                m1 = input[i];
                m2 = input[j];
               // printf("m1 = %d m2 = %d\n", m1,m2);
            }
          //  printf("count = %d\n", count);
        }
        
    }
    printf("%d\n%d", m1,m2);
    
    
    
    
    return 0;
}