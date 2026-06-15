// 1. strlen(str) - gives Unsigned Int (%lu)
#include<stdio.h>
#include<string.h>

int main(){
  char name[] = "Hello";
  // fgets(name);
  int length = strlen(name); // type casted to  INT
  printf("%d", length);
}

// ---------------------------------------------------------

// 2. strcpy(dest, src) - copy str into another
#include<stdio.h>
#include<string.h>

int main(){
  char old_str[] = "Hello";
  char new_str[] = "Bye";
  strcpy(old_str, new_str);
  puts(old_str);
}
// ---------------------------------------------------------

// 3. strcat(str1, str2) - concatenate strings
#include<stdio.h>
#include<string.h>

int main(){
  char s1[50] = "Hello"; // size of s1 must be >= (size of s1+s2) else "trace trap error"
  char s2[] = "World"; 
  strcat(s1, s2); // join s1 with s2
  puts(s1);
}

// ---------------------------------------------------------

// 4. strcmp(str1, str2) - compare strings
// Returns 0 -> If Equal
// Returns +ve -> If str1 > str2 (ASCII)
// Returns -ve -> If str1 < str2 (ASCII)
// ASCII Difference: "ASCII of str1 - str2" = Return Value

#include<stdio.h>
#include<string.h>

int main(){
  char str1[] = "Hello"; // size of s1 must be >= (size of s1+s2) else "trace trap error"
  char str2[] = "Hello"; 
  int r = strcmp(str1, str2);
  printf("%d", r);
}