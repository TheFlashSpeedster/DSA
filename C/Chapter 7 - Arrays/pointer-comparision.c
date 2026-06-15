#include<stdio.h>
int main(){
  int age1 = 20;
  // int agex= 20;
  // int *_agex = &agex;
  int age2 = 25;
  int *_age1 = &age1; 
  int *_age2 = &age2;

  printf("difference (%u - %u) = %u\n", _age1, _age2 ,_age1 - _age2); // 1   (memory location difference)
  _age1 = _age2;
  printf("comparision (%u - %u) = %u\n", _age1, _age2 ,_age1 == _age2);
}