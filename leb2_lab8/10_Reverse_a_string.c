#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    if (strlen(str) == 0) {
        return;
    } else {
        reverseString(str + 1);
        printf("%c", str[0]);
    }
}

int main() {
    char input[100]; 
    printf("Enter your String: ");
    scanf("%s", input);

    printf("Switched text: ");
    reverseString(input);
    printf("\n");

    return 0;
}
