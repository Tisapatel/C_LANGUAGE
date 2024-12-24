#include <stdio.h>

int main() {
  int Maths, Science, Physics, total, average;

  printf("Enter the marks for Maths (out of 100): ");
  scanf("%d", &Maths);

  printf("Enter the marks for Science (out of 100): ");
  scanf("%d", &Science);

  printf("Enter the marks for Physics (out of 100): ");
  scanf("%d", &Physics);

  total = Maths + Science + Physics;
  average = total / 3;

  printf("The average marks is: %d\n", average);

  return 0;
}
