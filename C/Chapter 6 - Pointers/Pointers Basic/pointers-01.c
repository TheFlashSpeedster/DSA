// Pointer - Variable that stores address of another variable
// & - address of operator
// * - value of operator at address

#include<stdio.h>
int main(){
  int age = 22;
  int *ptr = &age; // store address of 'age' into 'ptr' pointer
  
  printf("%d\n", age); // value of 'age' var
  printf("%d\n", *ptr); // value at 'ptr' pointer (address)
  printf("%d\n", *(&age)); // value at address of 'age' var
  
}