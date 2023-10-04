#include <stdio.h>

int LMC(int n1,int n2){
    int sum;
    sum = n1%n2;
    if (sum == 0)
    {
        return n1;
    }
    
    return n1 * LMC(n2,sum) / sum;
    

}

int main(void) {
    int n1,n2;
    scanf("%d\n%d",&n1,&n2);
    printf("LCM = %d",LMC(n1,n2));
}