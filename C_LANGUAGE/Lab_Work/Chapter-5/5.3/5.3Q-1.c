#include <stdio.h>

int main() {
  int num1, num2, num3, min;

  // Input the numbers from the user
  printf("Enter a value of the first number: ");
  scanf("%d", &num1);

  printf("Enter a value of the second number: ");
  scanf("%d", &num2);

  printf("Enter a value of the third number: ");
  scanf("%d", &num3);

  // Find the minimum using the ternary operator
  min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

  // Print the minimum value
  printf("The minimum value is: %d\n", min);

  return 0;
}
