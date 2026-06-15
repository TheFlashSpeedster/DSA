#include<iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Enter 1st Number: ";
  cin>>a;
  cout<<"Enter 2st Number: ";
  cin>>b;
  cout<<"Enter 3st Number: ";
  cin>>c;
  if (a>b && a>c)
  {
    cout<<a<<" is greatest"<<endl;
  }
  if (b>a && b>c){
    cout<<b<<" is greatest"<<endl;
  }
  if (c>a && c>b){
    cout<<c<<" is greatest"<<endl;
  }
}