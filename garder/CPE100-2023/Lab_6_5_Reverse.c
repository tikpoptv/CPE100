#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0,j; i < n; i++)
    {
        scanf("%d", &j);
        input[i] = j;
    }
    int j=n-1;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", input[j]);
        j--;
    }
    
    
    return 0;
}