#include<stdio.h>
#include<string.h>
int main(){
  char s1[] = "Hello"; 
  char s2[] = "World";
  strcpy(s1, s2); // dest size >= source
  printf("%s\n",s1); // World (no error)
}