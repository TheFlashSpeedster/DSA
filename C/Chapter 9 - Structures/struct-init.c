#include <stdio.h>
#include <string.h>

struct student
{
  int roll;
  char name[50]; // string via array (use strcpy)
};

int main()
{
  struct student s1 = {34, "Alex"};
  printf("%d\n", s1.roll);
  printf("%s\n", s1.name);
}