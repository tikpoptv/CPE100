#include <stdio.h>

int main() {
    int n;  

    printf("Enter your number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) { // Print spaces before the numbers 
            printf(" ");  // Print a space.
        }
        
        for (int j = 1; j <= i; j++) {   // Print the numbers for the current row.
            printf("%d", i);  // Print the current row number.
            if (j < i) { // Print a space except for the last number in the row.
                printf(" ");
            }
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
