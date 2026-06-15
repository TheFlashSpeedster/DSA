#include<stdio.h>

void squareValue(int n){
  n = n*n;
  printf("Squared (function): %d\n", n);
}

void squareReference(int *x){
  *x= (*x)*(*x);
  printf("Squared (function): %d\n", *x);
}

int main(){
  // pass by value
  int n=5;
  printf("Number: %d\n", n);
  squareValue(n);
  printf("Number (final): %d\n\n", n);

  // pass by reference 
  int x=5;
  printf("Number: %d\n", x);
  squareReference(&x);
  printf("Number (final): %d\n", x);
}