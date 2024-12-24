#include <stdio.h>

int main() {
    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    char grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' : (score >= 70) ? 'C' : (score >= 60) ? 'D' : 'F';

    printf("Your grade is %c\n", grade);

    return 0;
}
