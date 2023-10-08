#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Prime factors of %d are: ", num);

    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            int isPrime = 1;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", i);
            }
            num /= i;
        }
    }

    printf("\n");

    return 0;
}
