#include <stdio.h>
#include <string.h>

struct student
{
  int roll;
  char name[50]; // string via array (use strcpy)
};

void printStudent(struct student sx){ // pass by value
  printf("Roll: %d\n", sx.roll);
  printf("Name: %s\n", sx.name);
}

int main()
{
  struct student s1 = {34, "Alex"};
  struct student s2 = {44, "Ball"};
  printStudent(s1);
  printStudent(s2);
}