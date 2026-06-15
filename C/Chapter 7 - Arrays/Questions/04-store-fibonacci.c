// Fibnocci Series & Its Sum upto n terms

#include<stdio.h>
int main(){
  int n;
  printf("No of terms (n>2): ");
  scanf("%d", &n);
  int fib[n];
  fib[0] = 0;
  fib[1] = 1;

  int sum=1; // 1st and 2nd term sum
  for (int i = 2; i < n; i++)
  {
    // num = sum of (i-1)th value and (i-2)the value [previous two values]
    fib[i] = fib[i-1] + fib[i-2]; // IMPORTANT
    sum += fib[i];
  }

  for (int i = 0; i < n; i++)
  {
    printf("%d\t", fib[i]);
  }
  printf("\n");
  printf("Sum = %d\n", sum);
}