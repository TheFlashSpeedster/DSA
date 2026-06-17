#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number: ";
  cin >> n;

  int sum = 0;
  while (n>0)
  {
    int d = n % 10; // last digit (remainder)
    sum += d; // sum last digit
    n /= 10; // remove last digit
  }

  cout << sum << endl;
  
}