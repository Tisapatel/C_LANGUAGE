#include<stdio.h>
#include<conio.h>

int main() {
  float principal, rate, time, simpleInterest;
  printf("Enter the principal amount: ");
  scanf("%f", &principal);

  printf("Enter the rate of interest: ");
  scanf("%f", &rate);

  printf("Enter the time (in months): ");
  scanf("%f", &time);
  simpleInterest = (principal * rate * time) / 100;

  printf("Simple Interest: %.2f\n", simpleInterest);

}