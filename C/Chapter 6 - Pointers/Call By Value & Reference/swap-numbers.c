#include<stdio.h>

void swap(int a, int b){
  int temp = a;
  a = b;
  b = temp;
}

void _swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(){
  int a = 2, b = 3;
  // original
  printf("a = %d b = %d\n", a, b); // 2, 3

  // swap by value
  swap(a, b);
  printf("a = %d b = %d\n", a, b); // 2, 3

  // swap by reference
  _swap(&a, &b);
  printf("a = %d b = %d\n", a, b); // 3, 2
}