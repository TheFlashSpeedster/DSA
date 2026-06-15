// Write a function named slice, which takes a string & returns a sliced string from index n to m.

#include<stdio.h>
#include<string.h>

void slice(char str[], int m, int n){
  char newStr[100]; // to return
  int j=0; // new array indexing
  for (int i = m; i <= n; i++, j++)
  {
    newStr[j] = str[i];
  }
  newStr[j] = '\0'; // end string
  puts(newStr);
}

int main(){
  char name[] = "HelloWorld";
  slice(name, 3, 6);
}