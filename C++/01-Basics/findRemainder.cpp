#include<iostream>
using namespace std;

int main(){
  // dividend = quotient * divisor + remainder
  // remainder = dividend - quotient * divisor
  int a = 5, b = 2;
  int q = a/b, r = a - (b*q);
  cout<<"Quotient: "<<q<<endl;
  cout<<"Remainder: "<<r<<endl;

  return 0;
}