

#include <stdio.h>

int main() {
  float weight,max_weight,sum;
  int numresult, numpart;
  double decimalPart;
  

  printf("Enter your weight ");
  scanf("%f", &weight);
  printf("Enter your max_weight ");
  scanf("%f", &max_weight);
  sum = weight/max_weight;
  //Jedsadaporn Pannok ID:66070503410
  
  numpart = (int)sum;
  printf("Numpart = %d \n", numpart);
  decimalPart = sum - numpart;
  printf("DecimalPart = %d \n", decimalPart);

  if (decimalPart >= 0.5) {
    numresult = numpart + 1;
    printf("DecimalPart > 0.5 round up \n");
  } else {
    numresult = numpart;
    printf("DecimalPart > 0.5 round down \n");
  }

  printf("result : %d", numresult); 
}
