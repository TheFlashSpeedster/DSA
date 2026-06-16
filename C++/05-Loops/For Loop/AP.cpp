#include<iostream>
using namespace std;

int main(){
  int n;
  cout << "Enter Number of Terms: ";
  cin >> n;

  // for (int i = 1; i <= (2*n-1); i+=2)
  // {
  //   cout << i << endl;
  // }

  int a = 1; // first term
  for (int i = 1; i <= n; i++) // upto n terms
  {
    cout << a << endl;
    a = a + 2;
  }
  
}