// Write C program to find total number of prime numbers in a given range (Inclusive).

// Input: 

// First Line : An integer n, Where  -1000000 <=  n <= 1000000  # The first number in the range

// Second Line : An integer m, Where  n <= m <= 1000000 # The last number in the range

// Output: 

// First Line : The number of prime numbers in the given range

#include <stdio.h>

int main()
{
    int input,i,j,end;
    scanf("%d %d",&input,&end);
    int p,count=0;
    for(i=input;i<=end;i++){
        p = 1;
        if(i <= 1){
            p=0;
        }
        for(j=2;j*j<=i;j++){
            if(i%j==0){
                p=0;
                break;
            }

        }
        if(p==1){
            count++;
        }


    }
    printf("%d",count);
    return 0;
}

