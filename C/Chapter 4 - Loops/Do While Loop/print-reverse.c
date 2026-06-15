#include<stdio.h>
int main(){
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);

  int i=n;
  do{
    printf("%d\n", i);
    i--;
  } while(i!=0);
}