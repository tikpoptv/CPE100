#include <stdio.h>
#include <stdlib.h>

int* anagram();
int* scan(int n); 

int main(void) {
    int n;
    scanf("%d", &n);
    int* input1 = scan(n);
    scanf("%d", &n);
    int* input2 = scan(n);

    int size = n;

    for (int i = 0; i < size; i++) {
        printf("1 = %d\n", input1[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("2 = %d\n", input2[i]);
    }
    
    anagram(input1, input2, size);
    free(input1); 
    
}


int* scan(int n) {
    int* input = (int*)malloc(n * sizeof(int));
    if (input == NULL) {
        return NULL; 
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }
    return input;
}
int* anagram(int input1[],int input2[], int size){

    int size1, size2;

    size1 = sizeof(input1) / sizeof(input1[0]);
    size2 = sizeof(input2) / sizeof(input2[0]);

    if (size1 != size2)
    {
        printf("false");
    }
    

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            
        }
        
    }
    
}