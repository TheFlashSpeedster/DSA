#include <stdio.h>

int main(){
  int a = 5;
  int b = a;
  int c = b + 4;
  printf("%d", c);
  printf("\n");

  int x, y, z;
  x = y = z = 99;
  printf("%d %d %d", x, y, x);

  return 0;
}