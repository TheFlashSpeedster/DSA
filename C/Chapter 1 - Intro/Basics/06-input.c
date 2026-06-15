// Taking Input from the User

#include <stdio.h>

int main(){
  int a, b; // create variables
  printf("Enter A:");
  scanf("%d", &a); // int as input, store in "a"

  printf("Enter B:");
  scanf("%d", &b); // int as input, store in "b"

  printf("Sum is %d\n", a+b);
  printf("Difference is %d\n", a-b);
  printf("Product is %d\n", a*b);
  printf("Quotent is %d\n", a/b);

  return 0;
}