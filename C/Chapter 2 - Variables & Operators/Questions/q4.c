#include<stdio.h>
int main(){
  float a = 5*2-2*3; // 10 - 6 => 4
  printf("%.2f\n", a); 
  float b = 5*2/2*3; // 10/2*3 => 5*3 => 15
  printf("%.2f\n", b); 
  float c = 5*(2/2)*3; // 5*1*3 => 15
  printf("%.2f\n", c); 
  float d = 5+2/2*3; // 5+1*3 => 5+3 => 8
  printf("%.2f\n", d); 
}