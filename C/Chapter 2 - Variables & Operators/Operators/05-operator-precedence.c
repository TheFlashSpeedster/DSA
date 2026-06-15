#include<stdio.h>
int main(){
  // Operator Precedence
  /* 
  0. Brackets ()
  1. *, /, % 
  2. +, -
  3. =
  */

  // Associativity
  // (Follows Left to Right Within same Precedence)

  float r = 5-4*2+2/1; // 5-8+2 => -3+2 => -1
  printf("%.2f", r);
}