#include <iostream>
using namespace std;

// Reverse of a Number
// Steps:
// 1. r = r * 10; 2. last_digit = n % 10; 3. r += last_digit; 4. n /= 10;

int main()
{
  int n;
  cout << "Enter Number: ";
  cin >> n;
  int rev = 0;

  while (n>0)
  {
    rev *= 10;
    int d = n % 10; // last digit (remainder)
    rev += d;
    n /= 10; // remove last digit
  }
  cout << rev << endl;
}