#include<stdio.h>
int main(){
  int marks;
  scanf("%d", &marks);
  
  if(marks>=0 && marks<=30){
    printf("Fail");
  } else if (marks>30 && marks<=100) {
    printf("Pass\n");
  } else{
    printf("Invalid");
  }
}