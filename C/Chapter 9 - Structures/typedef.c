// typedef - used to create alias for data types

#include <stdio.h>
#include <string.h>

typedef struct studentInfo
{
  int roll;
  char name[50]; // string via array (use strcpy)
}stu;

typedef struct ComputerScienceStudent{
  int roll;
  char name[50];
}css;

int main()
{
  // use 'css' instead of 'struct ComputerScienceStudent'
  stu s1 = {34, "Alex"};
  css s2 = {44, "Ball"};
  printf("Roll: %d\n", s1.roll);
  printf("Name: %s\n", s1.name);

  printf("Roll: %d\n", s2.roll);
  printf("Name: %s\n", s2.name);
}