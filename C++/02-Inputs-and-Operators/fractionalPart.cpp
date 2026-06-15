#include <iostream>
using namespace std;
// Ques: Take float input and print the fractional part of the real number
int main()
{
  float x;
  cout<<"Enter Float Number: ";
  cin>>x; // Store Number

  int y = (int)x; // Integer Part
  if(y<0) y = y - 1;

  float z = x - y; // Fractional Part
  cout<<"Fractional Part: "<<z<<endl; // Print Fractional Part
  
  return 0;
}