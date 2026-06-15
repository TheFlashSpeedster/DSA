#include<stdio.h>
int main(){
  for(int i=1; i<=10; i++){
    if(i==6){
      continue; // loops skips statements when i=8
    }
    printf("%d ", i); // prints all except "8"
  }
}