// Write a function to calculate the sum, product & average of 2 numbers. Print that average in the main function. Using pointers pass by reference.

#include <stdio.h>

void calculate(int a, int b, int *sum, int *product, float *average)
{
  *sum = a + b;
  *product = a * b;
  *average = (a + b) / 2.0;
}

int main()
{
  int a = 5, b = 2;
  int sum, product;
  float average;

  calculate(a, b, &sum, &product, &average);

  printf("Sum = %d Product = %d Average = %f\n", sum, product, average);
}