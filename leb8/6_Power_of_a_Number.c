#include <stdio.h>

int Power(int n,int topwr){
    if (topwr == 0)
    {
        return 1;
    }else{
        return n * Power(n,topwr - 1);
    }
    
}
int main(void) {


    int n,topwr;
    scanf("%d\n%d",&n,&topwr);
    printf("Power_of_a_Number = %d",Power(n,topwr));
}