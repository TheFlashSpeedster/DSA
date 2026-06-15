#include<stdio.h>
int main(){
  int age;
  printf("Enter Age: ");
  scanf("%d", &age);

  // (condition) ? (valueIfTrue) : (valueIfFalse)
  age >= 18 ? printf("Adult") : printf("Kid");
}