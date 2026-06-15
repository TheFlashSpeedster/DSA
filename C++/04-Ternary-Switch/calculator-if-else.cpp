#include<iostream>
using namespace std;

int main(){
  int a, b;
  char o;
  cout<<"Enter The Problem: ";
  cin>>a>>o>>b;
  if(o=='+'){
    cout<<a+b<<endl;
  }
  if(o=='-'){
    cout<<a-b<<endl;
  }
  if(o=='*'){
    cout<<a*b<<endl;
  }
  if(o=='/'){
    cout<<a/b<<endl;
  }
}