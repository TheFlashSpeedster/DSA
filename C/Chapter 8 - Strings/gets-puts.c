// scanf() - cannnot input multi word strings (word seperated by spaces)
// So, we use string functions like gets(), fgets() to take input

// 1. [UNSAFE METHOD]
#include <stdio.h>
int main(){
  char name[50];
  
  // gets(str) - input string (also multi word) [UNSAFE]
  gets(name);
  
  // puts(str) - print string
  puts(name); // OR printf("%s\n", name);

}

// 2. [SAFE METHOD]
#include <stdio.h>
int main(){
  char name[50];
  
  // fgets(str, size, file) - Modern way for input string
  fgets(name, 50, stdin);
  puts(name); // OR printf("%s\n", name);
}

