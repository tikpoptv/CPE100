#include <stdio.h>

void Convert_Binary();

int main()
{
    int input;
    scanf("%d", &input);
    Convert_Binary(input);
    return 0;
}

void Convert_Binary(int num){
    int bin = 0,rem = 0,place = 1;
    while(num)
    {
        rem = num % 2;
        num = num / 2;
        bin = bin + (rem * place);
        place = place * 10;
    }
    printf("%d\n", bin);

}
