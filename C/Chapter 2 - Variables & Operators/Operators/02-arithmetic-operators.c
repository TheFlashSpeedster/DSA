#include <stdio.h>
#include<math.h>

int main(){
  int a = 5, b = 3;

  // Addition (+)
  printf("%d\n", a + b);

  // Subtraction (-)
  printf("%d\n", a - b);

  // Multiplication (*)
  printf("%d\n", a * b);

  // Division (/)
  printf("%.2f\n", (float)a / b); // convert "a" to float

  // Modulus (%)
  printf("%d\n", a % b);

  // Power (using pow function from math lib)
  printf("%.2f", pow(a,b)); // pow(x,y) returns "double" data type

  return 0;
}

// Type Conversion
/* 
int (operator) int = int
int (operator) float = float
float (operator) float = floatx
*/
