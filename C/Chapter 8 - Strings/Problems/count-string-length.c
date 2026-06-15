#include<stdio.h>

int getlen(char str[]){
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    count++;
  }
  return (count-1);
}

int main(){
  char name[50] = "He";
  fgets(name, 50, stdin);
  printf("%d", getlen(name));
}