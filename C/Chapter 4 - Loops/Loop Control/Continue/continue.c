// continue — Skip to Next Iteration

#include<stdio.h>
int main(){
  for(int i=1; i<=10; i++){
    if(i==8){
      continue; // loops skips statements when i=8
    }
    printf("%d ", i); // prints all except "8"
  }
}