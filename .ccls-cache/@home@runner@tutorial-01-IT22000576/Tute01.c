/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  flaot n1, n2, avg;

  printf("enter first: ");
  scanf("%f", &n1);

  printf("enter second: ");
  scanf("%f", &n2);

  avg = (n1 + n2) / 2;

  printf("average is %.2f", avg);
  return 0;
}

