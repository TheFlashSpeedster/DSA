
#include<stdio.h>
#include<string.h>

int main(){
  char str1[] = "Hello"; // size of s1 must be >= (size of s1+s2) else "trace trap error"
  char str2[] = "Iello"; 
  int r = strcmp(str1, str2);
  printf("%d", r);
}