#include <stdio.h>
int main(){
  // Logical AND (&&)
  // All Conditions must be TRUE

  printf("%d\n", 5==5 && 10==10); // true (1)
  printf("%d\n", 5>1 && 5>0); // true (1)
  printf("%d\n", 5<10 && 5<0); // false (0)
  printf("%d\n", 5<10 && 5>0); // true (1)

  // Logical OR (||)
  // Atleast one condition is TRUE

  printf("%d\n", 5==5 || 10==10); // true (1)
  printf("%d\n", 5>1 || 5>0); // true (1)
  printf("%d\n", 5<10 || 5<0); // true (1)
  printf("%d\n", 5<10 || 5>0); // true (1)
  printf("%d\n", 5>10 || 5>40); // false (0)

  // Logical NOT (!)
  // Reverses Boolean: True/False to False/True
  // Non-Zero (1,2,etc.): true (1)
  // Zero (0): false (0)

  printf("%d\n", 10>5); // true (1)
  printf("%d\n", !(10>5)); // false (0)
  printf("%d\n", !5); // false (0)
} 