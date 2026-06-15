#include <iostream>
using namespace std;

int main()
{
  bool p = false;
  bool q = false;
  bool r = true;
  // Equals Relation
  
  // A. Runs Left to Right ->
  cout<<(p==q==r)<<endl; // p==q: true -> true==r: true
  // Output: 1

  // B. Brackets First
  cout<<(p==(q==r))<<endl; // q==r: false -> p==false: true
  // Output: 1
  return 0;
}
