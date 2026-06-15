// typedef - used to create alias for data types

#include <stdio.h>
#include <string.h>

struct vector
{
  int x;
  int y;
};

void getSum(struct vector v1, struct vector v2, struct vector *sum){
  sum->x = v1.x + v2.x;
  sum->y = v1.y + v2.y;
}


int main()
{
  struct vector v1 = {2, 3};
  struct vector v2 = {4, 5};
  struct vector sum = {0}; // asigns both member as 0

  struct vector *ptr = &sum;
  getSum(v1, v2, ptr); // pass by reference (sum)
  printf("%d %d", sum.x, sum.y);

}