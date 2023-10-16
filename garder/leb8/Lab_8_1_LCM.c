#include<stdio.h>

int lcm(int a, int b)
{
    
    static int temp = 1;
    if(temp % a == 0 && temp % b == 0)
    {
        return temp;
    }
    temp++;
    lcm(a,b);
    return temp;
}

int main()
{
    int a,b;
    scanf("%d\n%d",&a,&b);
    if (a < 1 || b < 1)
    {
        printf("ERROR");
        return 0;
    }
    printf("%d",lcm(a,b));
    return 0;
}