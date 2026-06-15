#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int a = 5, b = 3;

  // Addition (+)
  cout<<(a+b)<<endl;

  // Subtraction (-)
  cout<<(a-b)<<endl;

  // Multiplication (*)
  cout<<(a*b)<<endl;

  // Division (/)
  cout<<(a/b)<<endl; // Using float for precision

  // Modulus (%)
  cout<<(a%b)<<endl;

  // Power (using pow function from math lib)
  cout<<(pow(a,b))<<endl; // pow(x,y) returns "double" data type

  return 0;
}
