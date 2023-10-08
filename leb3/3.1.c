#include <stdio.h>
#include <math.h> // Imported to be able to use ceil / ceil = Round off the decimal

int main() {
  float weight,max_weight;
  float sum;
  //Jedsadaporn Pannok ID:66070503410
  printf("Enter your weight ");
  scanf("%f", &weight);
  printf("Enter your max_weight ");
  scanf("%f", &max_weight);
  sum = weight/max_weight;
  printf("%f", ceil(sum));
  
}
