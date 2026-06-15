#include<stdio.h>
#include<string.h>

void checkChar(char str[], char ch){
  for (int i = 0; i < strlen(str); i++)
  {
    if(str[i] == ch) {
      printf("Found at %d\n", i);
      return;
    }
  }
  printf("Not found\n");
}

int main(){
  char str[] = "Hello";
  char ch = 'i';
  checkChar(str, ch);
}