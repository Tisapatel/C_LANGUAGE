#include <stdio.h>

int main() {
  int score;
  char grade;

  printf("Enter your score: ");
  scanf("%d", &score);

  if (score >= 90) {
    grade = 'A';
  } else if (score >= 80) {
    grade = 'B';
  } else if (score >= 70) {
    grade = 'C';
  } else if (score >= 60) {
    grade = 'D';
  } else {
    grade = 'F';
  }

  switch (grade) {
    case 'A':
      printf("Your grade is A. Excellent work!\n");
      break;
    case 'B':
      printf("Your grade is B. Well done!\n");
      break;
    case 'C':
      printf("Your grade is C. Good job!\n");
      break;
    case 'D':
      printf("Your grade is D. You passed, but you could do better!\n");
      break;
    case 'F':
      printf("Your grade is F. Sorry, you failed!\n");
      break;
  }

  return 0;
}
