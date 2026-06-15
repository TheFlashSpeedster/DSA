#include<stdio.h>

int fib(int n){
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  else{
    return fib(n-1) + fib(n-2);
  }
}

int main(){
  int n;
  printf("No of terms: ");
  // scanf("%d", &n);
  n = 6;

  printf("Fibonacci sum till %d: %d\n", n, fib(n));
}