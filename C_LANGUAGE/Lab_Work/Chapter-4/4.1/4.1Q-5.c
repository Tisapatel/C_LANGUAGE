#include <stdio.h>

int main() {
  int a = 10, b = 5, c = 2;
  
  a = a + b; 
  b = a - b; 
  c = a * c;

  printf("After swapping, a = %d, b = %d, c = %d", a, b, c);

}
