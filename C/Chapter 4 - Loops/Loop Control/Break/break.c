// break — Exit the Loop Immediately

#include<stdio.h>
int main(){
  for(int i=1; i<=10; i++){
    if(i==8){
      break; // loops exits when i=8
    }
    printf("%d ", i); // only prints till "7"
  }
}