// Pointer - Variable that stores address of another variable
// & - address of operator
// * - value of operator at address

#include<stdio.h>
int main(){
  int age = 22; // main variable
  printf("AGE Value: %d\n", age); // value
  printf("AGE Address: %p\n", &age); // address
  printf("\n");
  
  int *ptr = &age; // create pointer variable ('age' address)
  printf("PTR Value: %d\n", *ptr); // value
  printf("PTR Address: %p\n", &ptr); // address
  printf("\n");
  
  int _age = *ptr; // value present at 'ptr' (address)
  printf("_AGE Value: %d\n", _age); // value
  printf("_AGE Address: %p\n", &_age); // address
}