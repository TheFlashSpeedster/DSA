#include <stdio.h>
int main()
{
  // CHAR = 1 bit; INT, FLOAT, = 4 bits; DOUBLE = 8 bits;

  // int data type
  int n = 5;
  int *ptr = &n;
  printf("ptr = %u\n", ptr); // ...20 (address)

  ptr++;                     // increment by 4 bits (int takes 4 bit in memory)
  printf("ptr = %u\n", ptr); // ...24 (address)

  ptr--;                     // decrement by 4 bits (int takes 4 bit in memory)
  printf("ptr = %u\n\n", ptr); // ...20 (address)

  // char data type
  char b = 'X';
  char *ptrb = &b;
  printf("ptr = %u\n", ptrb); // ...21 (address)

  ptrb++;                     // increment by 1 bits (char takes 1 bit in memory)
  printf("ptr = %u\n", ptrb); // ...22 (address)

  ptrb--;                     // decrement by 1 bits (char takes 1 bit in memory)
  printf("ptr = %u\n", ptrb); // ...21 (address)
  
}