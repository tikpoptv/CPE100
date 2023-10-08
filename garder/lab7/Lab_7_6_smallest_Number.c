#include <stdio.h>

void smallest();

int main(void) {
    int n;
    scanf("%d", &n);
    int input[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input[i]);
    }
    smallest(input, n);
}

void smallest(int input[], int size){
    int x;
    for (int i = 0; i < size; i++)
    {
        x = 0;
        for (int j = 0; j < size; j++)
        {
            if (input[i] < input[j]) // 2 1 
            {
                x = input[i]; // 2
                input[i] = input[j]; // 1
                input[j] = x;  // 2
                // 2 1
                // 1 2
            }
        }
        
    }
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        x = 0;
            if (input[i] == 0)
            {
                count++;
            }else if(input[i] != 0 && count != 0){
                input[0] = input[i];
                input[i] = 0;
                break;
            }
    }
    
    for (int i = 0; i < size; i++)
    {
        printf("%d", input[i]);
    }
    

}