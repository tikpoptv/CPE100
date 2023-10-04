#include <stdio.h>

int calculatePascal(int i, int j) {
    if (j == 0 || j == i) {
        return 1; // The first and last element in each row is always 1
    } else {
        return calculatePascal(i - 1, j - 1) + calculatePascal(i - 1, j);
    }
}

void printPascalsTriangle(int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        // Print leading spaces to center-align the triangle
        for (j = 0; j < (n - i - 1); j++) {
            printf(" ");
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", calculatePascal(i, j));
        }
        printf("\n");
    }
}

int main() {
    int n;
    
    printf("Enter your Number: ");
    scanf("%d", &n);
    
    printPascalsTriangle(n);

    return 0;
}
