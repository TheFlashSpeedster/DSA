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
  if (a>b)
  {
    if(a>c){
      cout<<a<<" is greatest"<<endl;
    }
    else { // c>a
      cout<<c<<" is greatest"<<endl;
    }
  }
  else { // b>a
    if (b>c){
      cout<<b<<" is greatest"<<endl;
    }
    else { // c>b
      cout<<c<<" is greatest"<<endl;
    }
  }
  
}