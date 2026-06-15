#include<stdio.h>
int main(){
  int isSunday = 0;
  int isMonday = 1;
  int isSnowing = 1;
  int isRaining = 1;

  printf("%d\n", (isSunday && isSnowing) || (isMonday || isRaining));
}