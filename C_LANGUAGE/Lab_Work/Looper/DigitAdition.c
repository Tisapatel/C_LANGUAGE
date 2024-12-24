#include <stdio.h>

int main() {
    int num, first_digit, last_digit, sum;

    // Input the number
    printf("Enter any number: ");
    scanf("%d", &num);

    // Get the last digit
    last_digit = num % 10;

    // Get the first digit
    while (num >= 10) {
        num /= 10;
    }
    first_digit = num;

    // Calculate the sum of the first and last digits
    sum = first_digit + last_digit;

    // Output the result
    printf("The sum of the first and the last digit: %d\n", sum);

    return 0;
}


