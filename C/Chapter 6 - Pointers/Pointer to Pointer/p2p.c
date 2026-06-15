// Pointer to Pointer
// Variable that stores address of another pointer

#include<stdio.h>
int main(){
  int i=5; // (let address be = 2000)
  int *ptr = &i; // address of i (2010)
  int **pptr = &ptr; // address of ptr (2020)

  printf("pptr: %d\n", **pptr);
  // pptr = 2020
  // *pptr = 2010
  // **pptr = i = 5
}