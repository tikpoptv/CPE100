#include <stdio.h>

int main() {
    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // Print the numbers for the current floor
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
            if (j < i) {
                printf(" ");
            }
        }
        
        printf("\n");
    }

    return 0;
}
