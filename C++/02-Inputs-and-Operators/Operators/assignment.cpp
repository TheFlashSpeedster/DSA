#include <iostream>
using namespace std;

int main()
{
  // = (Assignment)
  int a = 5;
  cout << (a = 2) << endl; // 2

  // += (Addition Assignment)
  int b = 5;
  cout << (b += 2) << endl; // 7

  // -= (Subtraction Assignment)
  int c = 5;
  cout << (c -= 2) << endl; // 3

  // /= (Quotient Assignment)
  int d = 5;
  cout << (d /= 2) << endl; // 2

  // %= (Remainder Assignment)
  int e = 5;
  cout << (e %= 2) << endl; // 1

  return 0;
}
