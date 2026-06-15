#include<stdio.h>
#include<math.h>

int main()
{
    int n=153;
    int m = n; int x=0;
    while (m!=0)
    {
      x++; // count digits
      m /= 10; // remove last digit
    }

    int temp = n;
    int sum=0;
    while (temp!=0)
    {
      int d = temp % 10;
      sum += pow(d, x);
      temp /= 10;
    }

    printf("%d", sum);
    if(n==sum) printf("YES");
    
    
}