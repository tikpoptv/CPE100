#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    int count = 0, i = 0;

    while (i <= num) {   // Start a while loop that continues as long as i is less than or equal to num
        int isPrime = 1;
        if (i <= 1) {  // Check if i is less than or equal to 1
            isPrime = 0;  
        } else {
            // If i is greater than 1, check if it's a prime number
            int b = 2;
            while (b * b <= i) {
                if (i % b == 0) {  // If i is divisible by b without a remainder, it's not a prime number
                    isPrime = 0;
                    break; //Exit the loop
                }
                b++;
            }
        }
        if (isPrime) {
            printf("%d ", i); // Print the value of i and increment the count
            count++;
            if (count % 10 == 0) {   // If count is a multiple of 10 start a new line
                printf("\n");
            }
        }
        i++;
    }
    return 0;
}
