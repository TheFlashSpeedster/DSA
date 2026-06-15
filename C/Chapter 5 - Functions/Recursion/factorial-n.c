#include<stdio.h>

// factorial is only defined for +ve numbers

int fac(int n){
  if(n<=1) return 1; // base case
  int fac_nm1 = fac(n-1); // factorial of (n-1)
  int fac_n = fac_nm1 * n; // factorial of (n) = (n-1)! * n
  return fac_n;
}

int main(){
  printf("%d\n", fac(5));
}