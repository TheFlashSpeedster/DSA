// Arrays
// It is a contiguous block of memory that stores multiple values of the same data type under a single variable name.

#include<stdio.h>
int main(){
  int numbers[5] = {1,2,3,4,5}; // int array (size = 5)
  float price[3] = {100.50, 99.99, 69.11}; // float array (size = 3)
  char letters[5] = {'A', 'B', 'C', 'D', 'E'}; // char array (size = 5)

  printf("%d\n", numbers[0]);
  printf("%f\n", price[0]);
  printf("%c\n", letters[0]);
}