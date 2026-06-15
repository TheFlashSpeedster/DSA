#include<iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Enter Side A: ";
  cin>>a;
  cout<<"Enter Side B: ";
  cin>>b;
  cout<<"Enter Side C: ";
  cin>>c;
  // Sides Possible If Satisfies 
  if((a+b>c) && (b+c>a) && (a+c>b)){
    cout<<"Possible";
  }
  else {
    cout<<"Not Possible";
  }
}