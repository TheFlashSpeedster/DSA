// b. Write a program in C to print the elements of an array in reverse order.

#include<stdio.h>
int main(){
  int a[5] = {1,2,3,4,5};

  for (int i = 4; i >= 0; i--) // index 4 to index 0
  {
    printf("%d ", a[i]);
  }
}