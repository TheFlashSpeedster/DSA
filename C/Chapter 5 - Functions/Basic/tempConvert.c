#include<stdio.h>

float cToF(float c){
  // C to F: (x°C × 9/5) + 32
  float f = (c * 9.0/5.0) + 32.0;
  return f;
}

float fToC(float f){
  // F to C: (x − 32) × 5/9
  float c = (f - 32.0) * 5.0/9.0;
  return c;
}

int main(){
  printf("Fahrenheit: %f\n", cToF(50));
  printf("Celsius: %f\n", fToC(50));
}