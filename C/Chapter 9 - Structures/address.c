// typedef - used to create alias for data types

#include <stdio.h>
#include <string.h>

typedef struct address
{
  int house;
  int block;
  char city[50]; // string via array (use strcpy)
  char state[50]; // string via array (use strcpy)
}addr;

int main()
{
  // use 'css' instead of 'struct ComputerScienceStudent'
  addr p[2] = {{34, 22, "Bhopal", "MP"}, {44, 21, "L", "UP"}};
  printf("House: %d ", p[0].house);
  printf("Block: %d ", p[0].block);
  printf("City: %s ", p[0].city);
  printf("State: %s ", p[0].state);

  printf("\n");
  
  printf("House: %d ", p[1].house);
  printf("Block: %d ", p[1].block);
  printf("City: %s ", p[1].city);
  printf("State: %s ", p[1].state);
}