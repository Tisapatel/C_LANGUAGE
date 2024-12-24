#include <stdio.h>

int main() {
  int n, i = 1;

  printf("Enter any number: ");
  scanf("\n%d", &n);

  while (i <= n) {
    printf("\n%d ", i);
    i++;
  }

  return 0;
}
