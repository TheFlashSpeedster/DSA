// Sum of digits of a number

#include<stdio.h>
int main(){
  int n = 454; // sum of digits is 4+5+4 = 13
  int sum=0;
  while(n!=0){ // until number is not zero
    int digit = n%10; // reminder (gives last digit)
    sum += digit; // add last digit
    n = n/10; // quotient (remove last digit) and update 'n' (without having last digit)
  }

  printf("Sum of digits: %d\n", sum);
}