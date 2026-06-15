#include<stdio.h>
#include<string.h>
#define PI 3.14159

void countVowels(char str[]){
  int count=0;
  for (int i = 0; i < strlen(str); i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      count++;
    }
  }
  printf("Vowels: %d\n", count);
  
}

int main(){
  char str[50];
  fgets(str, 50, stdin);
  countVowels(str);
}