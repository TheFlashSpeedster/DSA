// Strings
#include<stdio.h>

void printString(char arr[]){
  for (int i = 0;  arr[i] != '\0'; i++)
  {
    printf("%c", arr[i]);
  }
  printf("\n");
}

int main(){
  // '\0' for converting char to string
  char name1[] = {'A', 'p', 'p', 'l', 'e', '\0'};
  char name2[] = "Apple";

  char name3[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
  char name4[] = "Hello World";
  
  printString(name1);
  printString(name2);
  printString(name3);
  printString(name4);
}