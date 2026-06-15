// typedef - used to create alias for data types

#include <stdio.h>
#include <string.h>

struct complex
{
  int r;
  int i;
};

int main()
{
  struct complex c1 = {2, 3};
  struct complex *ptr = &c1;
  printf("%d + %di", ptr->r, ptr->i);

}