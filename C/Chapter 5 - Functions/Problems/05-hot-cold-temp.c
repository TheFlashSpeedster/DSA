#include<stdio.h>
int main(){
  int temp;
  printf("Enter Temperature: ");
  scanf("%d", &temp);

  if(temp >= 35){
    printf("Hot!\n");
  }
  else {
    printf("Cold!\n");
  }
}