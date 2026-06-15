#include<stdio.h>

void printAddress(int n){
  printf("Pass By Value:\n");
  printf("Address (function): %p\n\n", &n);
}

void _printAddress(int *n){
  printf("Pass By Reference:\n");
  printf("Address (function): %p\n\n", n);
}

int main(){
  int n=4;
  printf("Original:\n");
  printf("Address (outside): %p\n\n", &n); // address of 'n' in main

  // Call by value
  printAddress(n); // n (copy) is passed

  // Call by refence
  _printAddress(&n); // original n is passed
}
