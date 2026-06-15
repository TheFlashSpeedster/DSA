// b. Write a program to print the largest number in an array.

#include<stdio.h>
int main(){
  int a[5] = {4,2,9,3,21};
  int max=a[0]; // assume 1st number as maximum

  for (int i = 0; i < 5; i++)
  {
    if(a[i] > max) max = a[i]; // compare numbers in whole array
  }
  printf("Largest Number: %d\n", max);
}