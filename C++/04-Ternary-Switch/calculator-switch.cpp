#include<iostream>
using namespace std;

int main(){
  int a, b;
  char o;
  cout<<"Enter The Problem: ";
  cin>>a>>o>>b;
  switch(o){
    case '+': {cout<<a+b; break;}
    case '-': {cout<<a-b; break;}
    case '*': {cout<<a*b; break;}
    case '/': {cout<<a/b; break;}
  }
}