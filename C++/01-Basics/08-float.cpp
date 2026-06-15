#include<iostream>
using namespace std;

int main(){
  float pi = 3.14;
  cout<<pi<<endl;

  // Atleast one should be float
  cout<<5/2<<endl; // 2 (both are int; int/int = int)
  cout<<5.0/2<<endl; // 2.5 (one is float; float/int = float)
  cout<<5/2.0<<endl; // 2.5 (one is float; int/float = float)
  cout<<5.0/2.0<<endl; // 2.5 (one is float; float/float = float)
  return 0;
}