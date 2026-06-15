#include<stdio.h>
#include<string.h>

struct student{
  int roll;
  float gpa;
  char name[50]; // string via array (use strcpy)
  char *lang; // string via pointer (direct assign)
};

int main(){
  struct student s1;
  s1.roll = 40;
  s1.gpa = 23.34;
  // s1.name = "Hello"; // Doesn't Work
  strcpy(s1.name, "Alex");

  s1.lang = "English"; // It Works!
  printf("%d\n", s1.roll);
  printf("%f\n", s1.gpa);
  printf("%s\n", s1.lang);
}