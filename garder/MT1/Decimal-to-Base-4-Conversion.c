#include <stdio.h>

int main()
{
    int num, bin = 0, rem = 0, place = 1;

   // printf("Enter a decimal number d\n");
    scanf("%d", &num);

  //  printf("\nBinary equivalent of %d is ", num);
    //Jedsadaporn Pannok No.66070503410
    for(int i = 0;i!=num;){
        rem = num % 4;
        num = num / 4;
        bin = bin + (rem * place);
        place = place * 10;

    }
    printf("%d\n", bin);

    return 0;
}


// Using the code below as a starting point, modify it to convert the decimal number to a base-4 number using a For loop instead of a While loop.

// Input:

// First Line : A single integer 'n' (0 <= n <= 1000) representing the decimal number to be converted to base-4.

// Output:

// First Line : The base-4 representation of the input decimal number.

// Note: In This problems, you should ensure that the converted base-4 number has leading zeros removed (e.g., "00101" should be represented as "101").



// Given Code : ( Covert Decimal number to Binary number using While loop )

// #include < stdio.h >

// int main()
// {
//     int num, bin = 0, rem = 0, place = 1;

//         //printf("Enter a decimal number\n");
//     scanf("%d", &num);

//         //printf("\nBinary equivalent of %d is ", num);
//     while(num)
//     {
//         rem = num % 2;
//         num = num / 2;
//         bin = bin + (rem * place);
//         place = place * 10;
//     }
//     printf("%d\n", bin);

//     return 0;
// }