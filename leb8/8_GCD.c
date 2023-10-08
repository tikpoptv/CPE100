#include <stdio.h>

int GCD(int n1, int n2) {
    int low, high;

    if (n1 < n2) {
        low = n1;
        high = n2;
    } else {
        low = n2;
        high = n1;
    }

    if (low == 0) {
        return high;
    } else if (low == 1) {
        return 1;
    } else {
        return GCD(low, high % low);
    }
}

int main(void) {
    int n1, n2;
    scanf("%d\n%d", &n1, &n2);
    printf("GCD = %d", GCD(n1, n2));
    return 0;
}
