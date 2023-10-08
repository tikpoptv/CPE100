#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n-1; i++){
        scanf("%d\n", &array[i]);
    }  
    // float sum = 0;
    // for(int i = 0; i < n; i++){
    //     sum += array[i];
    // }
    // float mean = sum / n;
    // printf("%d", mean);
    int MaxCount = 1;
    int mode = 0;
    for(int i = 0; i < n; i++){
        int count = 0;
        for(int j = 0; j < n; j++){
            if(array[i] == array[j]){
                count++;
            }
        }
        if(count > MaxCount){
            MaxCount = count;
            mode = array[i];
        }
    }

    printf("%d\n", mode);
    return 0;
    }