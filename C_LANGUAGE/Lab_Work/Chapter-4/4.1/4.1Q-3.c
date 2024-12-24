#include <stdio.h>
#include <math.h>

int main() {
  int x, y;
  double result;

  printf("Enter the value of x: ");
  scanf("%d", &x);

  printf("Enter the value of y: ");
  scanf("%d", &y);

  result = pow(x + y, 3);
  printf("The result of (x + y)^3 is: %.2f\n", result);


}
