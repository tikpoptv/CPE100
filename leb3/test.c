#include <stdio.h>
#include <math.h>

void formatNum(double number) { // 
    if (number == (int)number) {
        printf("%d\t", (int)number);
    } else {
        printf("%.2f\t", number);
    }
}


int main() {
 
  float a = 32;
  float b = 5;
  float fraction;
  fraction = a/b;
  
  int integerResult = (int)fraction;
  printf("%f", a);
  formatNum(a);
  return 0;
}
