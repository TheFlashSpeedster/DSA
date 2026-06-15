#include <iostream>
using namespace std;
int main()
{
  int num1;
  int p = 5, q = 10;
  p += q -= p; // Follows Right to Left <<--
  // q-=p: (10-5) = 5 [q]
  // p+=(5) = 5+(5) = 10 [p]
  cout<<p<<endl; // p = 5 + q = 5 + 5 = 10
  cout<<q<<endl; // q = 10 - p = 10 - 5 = 5
  return 0;
}