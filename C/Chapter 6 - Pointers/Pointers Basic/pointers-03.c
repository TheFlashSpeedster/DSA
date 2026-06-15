#include <stdio.h>
int main()
{
  int x;
  int *ptr;

  ptr = &x; // pointer = address of x
  *ptr = 0; // value at pointer = 0. So x = 0

  printf("x = %d\n", x);      // 0
  printf("ptr = %d\n", *ptr); // 0

  *ptr += 5;
  printf("x = %d\n", x);      // 5
  printf("ptr = %d\n", *ptr); // 5

  (*ptr)++;
  printf("x = %d\n", x);      // 6
  printf("ptr = %d\n", *ptr); // 6
}