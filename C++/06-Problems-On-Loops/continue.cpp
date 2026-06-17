#include<iostream>
using namespace std;

// continue - skip current iteration

// WAP - Print Odd Numbers / skip even numbers

int main(){

  for (int i = 1; i <= 100; i++){
    if(i%2==0){
      continue;
    }
    else{
      cout << i << endl;
    }
  }
}