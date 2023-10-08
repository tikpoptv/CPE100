#include <stdio.h>

int main(void) {
    int i = 0;
    float sum = 0.0;
    char c[100];

    do {
        scanf(" %c", &c[i]);
        i++;
    } while(c[i-4] != 'e' && c[i-3] != 'x' && c[i-2] != 'i' && c[i-1] != 't');
    
    int li = 0, cnt = 0;
    while (c[li] >= '0' && c[li] <= '9') {
        sum += (c[li] - '0');
        li++;
        cnt++;
    }

    if (cnt != 0) {
        printf("%.2f\n", sum / cnt);  // แสดงผลทศนิยมสองตำแหน่ง
    } else {
        printf("none\n");
    }

    return 0;
}
