#include <stdio.h>
#include <math.h>  // Imported to be able to use fmod / fmod = mod decimal
int main() {
  float a, b, sum, fraction;
  printf("Enter your number ");
  scanf("%f",&a);
  printf("Enter your number ");
  scanf("%f",&b);
  sum = a/b;
  fraction = fmod(a,b);
  //Jedsadaporn Pannok ID:66070503410
  int sumResult = (int)sum;  //decimal to integer
  int fractionResult = (int)fraction; //decimal to integer
  printf("%d\t", sumResult);
  printf("%d", fractionResult);
  return 0;
}

