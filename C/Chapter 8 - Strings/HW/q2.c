// b. Write a program to print the highest frequency character in a string.
#include<stdio.h>
#include<string.h>

int main(){
  char str[] = "Hellooo";
  char str2[10];
  int count=0;
  for (int i = 0; i < strlen(str); i++)
  {
    count++;
  }
  

  printf("%s\n", str);
}