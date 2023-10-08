#include <stdio.h>

int main() {
    
  char character;
  printf("Enter a character: ");
  scanf("%c", &character);

  if (character >= 'A' && character <= 'Z') {
        printf("Upper\n");
    } else if (character >= 'a' && character <= 'z') {
        printf("Lower\n");
    } else if (character >= '0' && character <= '9') {
        printf("Number\n");
    } else {
        printf("does not qualify!!!\n");
    }
    return 0;
    //Jedsadaporn Pannok ID:66070503410
}
