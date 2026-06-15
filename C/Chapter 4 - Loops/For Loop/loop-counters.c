#include<stdio.h>

int main() {
  // using "float" counters
  for(float i=1.0; i<=5.0; i++){
    printf("%f ", i);
  }

  printf("\n");

  // using "char" counters
  // Here, it compares via ASCII values of characters
  for(char ch='a'; ch<='f'; ch++){
    printf("%c (ASCII = %d)\n", ch, ch);
  }
}