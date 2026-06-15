/*
for(initialisation; condition; updation){
  // statement 1
  // statement 2
  // statement 3
}
*/

#include <stdio.h>
int main() {
  for (int i = 0; i <= 5; i++) {
    printf("%d ", i);
  }

  printf("\n");

  for (int j = 6; j >= 1; j--) {
    printf("%d ", j);
  }
  printf("\n");

  for (int k = -10; k <= 0; k++) {
    printf("%d ", k);
  }

  return 0;
}