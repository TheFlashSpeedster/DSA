#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Base = ";
  cin >> a;
  cout << "Exponent = ";
  cin >> b;

  bool positive = true;
  if (b < 0)
  {
    positive = false;
    b = -b;
  }

  float pow = 1;
  for (int i = 1; i <= b; i++)
  {
    pow *= a;
  }

  if (positive == false)
  {
    pow = 1 / pow;
    b = -b;
  }

  if(a==0 && b==0) cout << "Not defined" << endl;
  else cout << a << " raise to the power " << b << " is = " << pow << endl;
}