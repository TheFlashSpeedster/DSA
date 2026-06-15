// Break when user enter a number which is multiple of 7
#include<stdio.h>

int main(){
  int n;
  while(1){
    printf("Enter Number: ");
    scanf("%d", &n);

    if(n%7==0){
      break;
    }
  }
}