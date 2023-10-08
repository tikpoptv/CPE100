#include <stdio.h>
int Fibonacci(int n){
    if (n == 0){
        return 0;
    }
    else if(n == 1){
        return 1; // JEDSADAPORN PANNOK NO.66070503410

    }else{
        return Fibonacci(n-1) + Fibonacci(n-2);
    }
}
int main(void) {
    int n;
    scanf("%d",&n);
    printf("Fibonacci = %d",Fibonacci(n));
}
