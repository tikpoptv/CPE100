#include <stdio.h>

int main() {
    int a;
    printf("enter your number: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Negative integers cannot be used.\n");
        return 1;
    }

    double sum = 0.0;
    double b = 9.0;

    for (int i = 1; i <= a; i++) {
        sum += b;
        printf("%.0f", b);

        if (i < a) {
            printf(" + ");
        } else {
            printf(" = %.0f\n", sum);
        }

        b = b * 10 + 9;
    }

    return 0;
}
