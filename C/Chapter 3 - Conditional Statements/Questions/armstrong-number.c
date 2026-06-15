#include<stdio.h>
#include<math.h>

// Count no of digits of number
int order(int n){
  int count=0;
  while(n){
    count++;
    n/=10;
  }
  return count;
}

int check_armstrong(int n){
  int x = order(n);
  int t=n, sum=0;

  while(t){
    int r = t%10; // get last digit (remainder)
    sum += pow(r, x); // add (last digit^order)
    t /= 10; // remove last digit
  }

  return(sum==n); // if sum == number
}

int main(){
  int n;
  scanf("%d", &n);

  check_armstrong(n) ? printf("Armstrong ✅") : printf("Not Armstrong ❌");
}