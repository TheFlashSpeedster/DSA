// Sum of first N natural numbers

#include<stdio.h>
int main(){
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);

  int i=1, sum=0;
  do{
    sum += i;
    printf("%d\n", i);
    i++;
  } while(i<=n);

  printf("Sum is %d", sum);
}