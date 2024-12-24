#include <stdio.h>

int main() {
  int num1, num2, num3, min;

  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  printf("Enter the third number: ");
  scanf("%d", &num3);

  min = num1;

  if (num2 < min) {
    min = num2;
  }

  if (num3 < min) {
    min = num3;
  }

  printf("The minimum value is: %d\n", min);

  return 0;
}
