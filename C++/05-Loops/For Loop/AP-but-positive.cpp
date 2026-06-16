#include<iostream>
using namespace std;

// 100 97 94 ....
// d = -3

int main(){
  for (int i = 100; i >= 0; i-=3) // upto n terms
  {
    if (i%2==0) cout << i << endl;
  }
  
}