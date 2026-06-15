#include<stdio.h>
int main(){
  int n;
  do{
    printf("Enter Number: ");
    scanf("%d", &n);

    if(n%2!=0){ // If Odd
      break; // Exit The Loop
    }
  } while(1); // Infinite Loop
}