#include<stdio.h>

void printHello(); // function declaration
void printGoodbye(); // function declaration


int main(){
  printHello(); // function call
  printGoodbye(); // function call
}

void printHello(){ // function definition
  printf("Hello World!\n");
}

void printGoodbye(){ // function definition
  printf("Good Bye!\n");
}