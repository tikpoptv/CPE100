#include <stdio.h>

int main() {
    int a;
    printf("enter your number: "); 
    scanf("%d", &a); 

    if (a <= 0) {  //Check if it is lower than 0, if lower then display a message.
        printf("Negative integers cannot be used.\n"); 
        return 1;  
    }

    double sum = 0.0;
    double b = 9.0;

    for (int i = 1; i <= a; i++) {
        sum += b;  
        printf("%.0f", b);  // Display the value of B without decimal places
        if (i < a) {
            printf(" + "); //Show plus sign
        } else {
            printf(" = %.0f\n", sum);  //show equal sign
        }
        b = b * 10 + 9;  // Update the value of 'b' to the next number 
    }
    return 0; 
}
