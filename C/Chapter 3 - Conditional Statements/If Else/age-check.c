#include<stdio.h>
int main(){
  int age;
  printf("Enter Age: ");
  scanf("%d", &age);
  
  if (age>=18)
  {
    printf("Adult");
  }
  else if(13<age && age<18){
    printf("Teen");
  }
  else{
    printf("Kid");
  }
  
}