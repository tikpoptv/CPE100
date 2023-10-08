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
  float a, b, sum, fraction;

  printf("Enter your number ");
  scanf("%f",&a);
  printf("Enter your number ");
  scanf("%f",&b);
  
  sum = a/b;
  fraction = fmod(a,b);
  int fractionResult = (int)fraction; //decimal to integer
  //Jedsadaporn Pannok ID:66070503410
  formatNum(sum);
  printf("%d", fractionResult);
  return 0;
}
