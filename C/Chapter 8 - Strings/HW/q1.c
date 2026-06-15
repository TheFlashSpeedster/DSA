// a. Write a program to convert all lowercase vowels to uppercase in a string.
#include<stdio.h>
#include<string.h>

int main(){
  char str[50] = "Hello";
  int len = strlen(str);
  for(int i=0; i<len; i++){
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      str[i] = str[i] - 32;
    }
  }

  printf("%s\n", str);
}