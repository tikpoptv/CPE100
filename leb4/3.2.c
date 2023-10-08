#include <stdio.h>

int main() {
    int decimal;
    int binary[100];
    int i = 0;

    printf("Enter your number: "); // Display a prompt asking the user to input an integer for conversion to binary
    
    scanf("%d", &decimal);

    while (decimal > 0) { // Convert the integer to binary representation
        
        binary[i] = decimal % 2;

        decimal = decimal / 2;

        i++;  // Increment the index 'i' to keep track of the storage location in the 'binary' array
    }

    printf("results: ");
    for (int j = i - 1; j >= 0; j--) {  // Iterate through the 'binary' array in reverse to print the binary digits
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
