// c. Write a program to insert an element at the end of an array.

#include<stdio.h>
int main(){
  int a[10] = {1,2,3,4,5};
  int new = 10;
  a[5] = new;

  printf("Final Array: ");
  
  for(int i=0; i<5; i++){ // print final array
    printf("%d ", a[i]);
  }
}