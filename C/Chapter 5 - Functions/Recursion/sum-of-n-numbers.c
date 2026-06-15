#include<stdio.h>

int sum(int n){
  if(n==1){ // base or termination case
    return 1;
  }
  else{
    return n + sum(n-1);
  }
}

int main(){
  int n = 2;
  printf("Sum of first %d numbers = %d\n", n, sum(n));
}