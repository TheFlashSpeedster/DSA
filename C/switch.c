#include<stdio.h>
int main(){
  int x;
  scanf("%d", &x);

  switch(x){
    case 1: printf("Monday"); break;
    case 2: printf("Tuesday"); break;
    default: printf("Invalid");
  }
}