#include <stdio.h>

int main() {
  int angles_inside, n;
  //Jedsadaporn Pannok ID:66070503410
  printf("Enter your number of squares: ");
  scanf("%d",&n);
  
  angles_inside = (n - 2)*180;
  printf("Angles inside = %d",angles_inside);

  return 0;
}
