#include <stdio.h>
#include <string.h>

struct student
{
  char name[50]; // string via array (use strcpy)
  int roll;
};

int main()
{
  struct student s1;
  s1.roll = 40;
  strcpy(s1.name, "Alex");
  printf("%d\n", s1.roll);
  printf("%s\n", s1.name);

  struct student s2;
  s2.roll = 41;
  strcpy(s2.name, "Bob");
  printf("%d\n", s2.roll);
  printf("%s\n", s2.name);

  struct student s3;
  s3.roll = 42;
  strcpy(s3.name, "Nemar");
  printf("%d\n", s3.roll);
  printf("%s\n", s3.name);
}