// c. Write a program to remove blank spaces in a string.
#include<stdio.h>
#include<string.h>

int main(){
  char name[] = "Hello World";
  int l = strlen(name);
  int j=0;
  for (int i = 0; i < l; i++)
  {
    if (name[i] == ' ')
    {
      continue;
    }
    name[j++] = name[i];
  }
  name[j] = '\0';
  printf("%s\n", name);
  
}

// d. Write a program to replace lowercase letters with uppercase & vice versa in a string.