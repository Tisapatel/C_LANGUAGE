#include <stdio.h>
#include <math.h>

int main() {
	
	
  float radius, perimeter;
  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);
  perimeter = 2 * M_PI * radius;
  printf("The perimeter of the circle is: %.2f\n", perimeter);


}
