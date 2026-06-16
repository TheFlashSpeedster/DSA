#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter Number of Terms: ";
  cin >> n;

  int a = 1; // first term
  for (int i = 1; i <= n; i++) // upto n terms
  {
    cout << a << endl;
    a = a * 2; // increment in GP terms
  }
  
}