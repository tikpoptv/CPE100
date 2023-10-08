#include <stdio.h>

int main() {
    int n;

    printf("Enter your number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Print spaces 
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        printf("*"); // Print a star for the upper part 
        if (i > 1) {// Print additional stars for the middle part 
            for (int j = 1; j <= 2 * i - 3; j++) {
                printf("*");
            }
        }
        if (i > 1) {
            printf("*"); // Print a star for the upper part 
        }
        printf("\n");
    }

    return 0;
}
