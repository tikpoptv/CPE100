// Least Common Multiple  (LCM) of two numbers using recursive function

#include <stdio.h>

int lcm(int, int);

int main()
{
    // Jeddaporn Pannok 
    int a, b, result;

    scanf("%d %d", &a, &b);
    if (a > b)
        result = lcm(a, b);
    else
        result = lcm(b, a);
    printf("%d\n", result);

    return 0;
}



int lcm(int a, int b)
{
    static int multiple = 0;
    printf("multiple 1 = %d\n", multiple);
    multiple += b;
    printf("multiple 2 = %d\n", multiple);
    if ((multiple % a == 0) && (multiple % b == 0))
    {
        return multiple;
    }
    else
    {
        return lcm(a, b);
    }
}
