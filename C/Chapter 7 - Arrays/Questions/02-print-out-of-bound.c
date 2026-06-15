#include<stdio.h>
int main(){
  int a[5] = {1,2,3,4,5};
  printf("%d\n", *(a)); // index 0
  printf("%d\n", *(a+2)); // index 2
  printf("%d\n", *(a+4)); // index 4
  printf("%d\n", *(a+5)); // garbage value
}