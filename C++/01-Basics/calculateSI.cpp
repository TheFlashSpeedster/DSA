#include<iostream>
using namespace std;

int main(){
 float p = 1000; // princial
 float r = 2.2; // rate (in %)
 float t = 2; // time (in years)
 float si = (p*r*t)/100;
 cout<<"Simple Interest: ₹"<<si<<endl;

 return 0;
}