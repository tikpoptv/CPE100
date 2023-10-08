#include <stdio.h>

int fibonacci(int n); 

int main(void) {
    int n;
    scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d", result);
    return 0;
}

int fibonacci(int n) {
    if (n <= 0) {
        return 0; 
    } else if (n == 1) {
        return 1;
    } else {
        int f0 = 0, f1 = 1, sum;
        for (int i = 2; i <= n; i++) {
            sum = f0 + f1;
            f0 = f1;
            f1 = sum;
        }
        return sum;
    }
}
