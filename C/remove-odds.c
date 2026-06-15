#include<stdio.h>
int main(){
  int x = 1234567890;
  int a[10];
  while(x!=0){
    int d = x % 10; // last digit
    x = x / 10; // remove last digit
    if(d%2==0){
      int i=0;
      a[i] = d;
      i++;
    }
  }

  for (int i = 0; i < 10; i++)
  {
    printf("%d ", a[i]);
  }
  
  
}