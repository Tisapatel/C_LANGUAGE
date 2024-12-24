#include <stdio.h>

int main() {
  int n, i;

  printf("Enter any number: ");
  scanf("%d", &n);

  i = n;
  while (i >= 1) {
    if (i % 2 != 0) {
      printf("%d ", i);
    }
    i--;
  }

  return 0;
}
