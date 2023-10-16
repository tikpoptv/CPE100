#include <stdio.h>

int power_check();
int power();

int main(void){
    int n;
    scanf("%d", &n);
    for (size_t i = 2; i <= 4; i++)
    {
        power_check(i,n);
    }
    return 0;
}

int power(int n,int m){
    if (m == 0)
    {
        return 1;
    }
    return n * power(n, m-1);
}

int power_check(int n, int m){
    
    int i = 0;
    while (power(n, i) < m)
    {
        i++;
    }
    if (m == power(n, i))
    {
        printf("True\n");
    }else{
        printf("False\n");
    }
    
     
    
    // int n1,n2,n3;
    // n1 = pow(n, 2);
    // n2 = pow(n, 3);
    // n3 = pow(n, 4);

    // if(n1 % 2 == 0){
    //     printf("True\n", n1);
    // }else{
    //     printf("False\n", n1);
    // }
    // if(n2 % 3 == 0){
    //     printf("True\n", n2);
    // }else{
    //     printf("False\n", n1);
    // }
    // if (n2 % 4 == 0)
    // {
    //     printf("True\n", n3);
    // }else{
    //     printf("False\n", n1);
    // }
}