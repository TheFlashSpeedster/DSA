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
  
  // using pointers
  struct student *ptr = &s1;

  // using Dot Operator (.) (with *)
  printf("%d\n", (*ptr).roll);
  printf("%s\n", (*ptr).name);

  // using Arrow Operator (->) (with address)
  printf("%d\n", ptr->roll);
  printf("%s\n", ptr->name);

}