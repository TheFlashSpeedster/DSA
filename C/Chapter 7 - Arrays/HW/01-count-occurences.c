// a. In an array of numbers, find how many times does a number 'x' occurs.
#include<stdio.h>
int main(){
  int numbers[5] = {1,2,3,2,3};
  int count=0;
  int x; // to find
  printf("Enter Number To Find: ");
  scanf("%d", &x);

  for (int i = 0; i < 5; i++)
  {
    if(numbers[i]==x) count++;
  }
  printf("No of occurences: %d\n", count);
  
}