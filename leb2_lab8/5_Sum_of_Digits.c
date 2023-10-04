#include <stdio.h>

int SumDigits(int n){
    if (n == 0){
        return 0;
    }else{
        return (n%10) + SumDigits(n/10);
    }
}

int main(void) {
    int n;
    scanf("%d",&n);
    printf("SumDigits = %d",SumDigits(n));
}