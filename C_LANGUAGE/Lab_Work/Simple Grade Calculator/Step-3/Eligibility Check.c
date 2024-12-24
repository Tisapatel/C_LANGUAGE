#include <stdio.h>

int main() {
  int score;

  printf("Enter your game score: ");
  scanf("%d", &score);

  if (score >= 90) {
    printf("Congratulations! You are eligible for the next level.\n");
  } else if (score >= 80) {
    printf("Congratulations! You are eligible for the next level.\n");
  } else if (score >= 70) {
    printf("Congratulations! You are eligible for the next level.\n");
  } else if (score >= 60) {
    printf("Congratulations! You are eligible for the next level.\n");
  } else {
    printf("Please try again next time.\n");
  }

  return 0;
}
