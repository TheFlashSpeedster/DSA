#include<stdio.h>
int main(){
  // array[rows][columns] = {{row 1 with 3 columns}, {row 2 with 3 columns}}
  int marks[2][3];

  // row 1
  marks[0][0] = 90;
  marks[0][1] = 80;
  marks[0][2] = 70;

  // row 2
  marks[1][0] = 60;
  marks[1][1] = 50;
  marks[1][2] = 40;

  printf("%d", marks[0][0]);
}