#include<iostream>
using namespace std;

int main(){
  int p, r, t;
  cout<<"Enter Principal (in ₹): ";
  cin>>p; // principal
  cout<<"Enter Rate (in %): ";
  cin>>r; // rate
  cout<<"Enter Time (in years): ";
  cin>>t; // time
  float si = (p*r*t)/100;
  cout<<"SI = ₹"<<si;
  cout<<endl;
  return 0;
}
