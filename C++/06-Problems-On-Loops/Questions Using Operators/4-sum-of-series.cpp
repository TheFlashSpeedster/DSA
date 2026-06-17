#include <iostream>
using namespace std;

// sum of this: 1 - 2 + 3 - 4 + 5 - 6 ....
// i.e., - for even, + for odd

int main()
{
  int n;
  cout << "No of terms: ";
  cin >> n;

  // Method 1 - Basic

  // int sum = 0;
  // for(int i=1; i<=n; i++){
  //   if(i%2==0) sum -= i;
  //   else sum += i;
  // }
  // cout << sum << endl;

  // Method 2 - Better
  if(n%2==0) cout << (-n/2) << endl;
  else cout << (-n/2 + n) << endl;
}