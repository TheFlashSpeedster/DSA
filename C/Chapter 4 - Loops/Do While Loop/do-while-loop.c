/*
do {
  // statement 1
  // statement 2
} while (condition);

"Do" always runs atleast ONCE first. Then it checks the while condition.
*/


#include<stdio.h>
int main(){
  int i=0; // declaration and initialization
  do{
    printf("%d ", i);
    i++; // updation
  } while(i<=5); // condition
}