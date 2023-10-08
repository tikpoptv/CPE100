#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string is a palindrome
bool Palindrome(const char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (Palindrome(str)) {
        printf("Yes\nReverse of %s is also %s.\n", str, str);
    } else {
        printf("No\nReverse of %s is not %s.\n", str, str);
    }

    return 0;
}
