#include <stdio.h>

int hailstone(int n){
    if(n == 1){
        printf("%d\n", n);
        return 0;
    }
    if(n % 2 == 0){
        printf("%d\n", n);
        hailstone(n/2);
    }else{
        printf("%d\n", n);
        hailstone(3*n+1);
    }
} // Jedsadaporn Pannok No.66070503410

int main(){
    int n;
    scanf("%d", &n);
    hailstone(n);
    return 0;
}

/*
Write a program in C to find the Hailstone sequence starting with a given number using a recursive function.

Hailstone Rule : (input X)

- if number is Odd : Next is 3X+1

- if number is Even : Next is X/2

- End sequence if X = 1 

Input: 

First Line : integer m while 1 <  m <= 10000 

Output: 

Line 2 to Last Line : Hailstone sequence ( Start with start number and end with 1 )
*/