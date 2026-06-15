// a. Write a program in C to find the maximum number between two numbers using a pointer.
#include <stdio.h>

int main()
{
  int a = 3, b = 9;
  int *_a = &a, *_b = &b;
  if (*_a > *_b)
  {
    printf("%d is maximum\n", *_a);
  }
  else if (*_b > *_a)
  {
    printf("%d is maximum\n", *_b);
  }
  else{
    printf("both are equal\n");
  }
}