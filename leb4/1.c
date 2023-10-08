#include <stdio.h>

int GCD(int a, int b) { //Used to calculate GCD.
    while (b != 0) {
        int sum = b;
        printf("a = %d ", a);
        printf("b = %d\t", b);
        b = a % b; // Divide the number to find the remainder of the product between b and a.
        printf("mod = %d ", b);
        a = sum;
        printf ("sum = %d\n",a);
    }
    return a;
}


int main (void) {
    int num1, num2;
    printf("Enter your numbers: ");
    scanf("%d %d", &num1, &num2);

    int gcd = GCD(num1, num2); //Call the GCD function

    printf("GCD of %d and %d is %d\n", num1, num2, gcd);  //show results

    return 0;
}



/*

2   12 14
    6  7


1    7   3



*/