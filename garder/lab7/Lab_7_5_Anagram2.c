#include <stdio.h>
#include <stdlib.h>

void anagram();

int main(void) {
    int size1,size2;
    scanf("%d", &size1);
    int input1[size1];
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &input1[i]);
    }
    
    scanf("%d", &size2);
    int input2[size2];
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &input2[i]);
    }
    if (size1 != size2)
    {
        printf("False");
    }else{
        anagram(input1, input2, size1, size2);
    }

}


void anagram(int input1[],int input2[], int size1, int size2){
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (input1[i] == input2[j])
            {
                count++;
            }
            
        }
        
    }
    if (count == size1)
    {
        printf("True");
    }else{
        printf("False");
    }

}