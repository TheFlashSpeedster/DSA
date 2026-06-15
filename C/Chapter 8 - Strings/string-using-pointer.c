// String using Pointers

#include<stdio.h>
int main(){
  // Declare by Pointer
  char *canChange = "Hello World"; // stores string and pointer
  puts(canChange); // print
  canChange = "Bye World"; // change string
  puts(canChange); // print

  // Declare by Array
  char cannotChange[] = "Hello World";
  puts(canChange); // print
  canotChange = "Bye World"; // ERROR
  puts(canotChange); // print
}