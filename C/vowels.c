#include<stdio.h>
#include<string.h>

int main(){
  char str[] = "Hello World";
  int i, j = 0;
  for (i = 0; str[i] != '\0'; i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
      continue;
    }
    str[j] = str[i];
    j++;
  }
  

  str[j] = '\0';
  printf("%s", str);
  
  
}