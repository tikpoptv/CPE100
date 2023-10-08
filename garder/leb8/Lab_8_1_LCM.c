#include <stdio.h>

int lcm();

int main(void) {
    int n1,n2;
    scanf("%d\n%d",&n1,&n2);
    printf("%d",lcm(n1,n2));
}

int lcm(int n1,int n2) {
    static int multiple = 0;
    if (n1%n2==0)
    {
        multiple += n1;
    }
    
}