#include <stdio.h>

int lastone(int n, int k){
    if(n == 1){
        return 1;
    }
    return (lastone(n-1, k) + k-1) % n + 1;
}

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", lastone(n, k));
    return 0;
}
