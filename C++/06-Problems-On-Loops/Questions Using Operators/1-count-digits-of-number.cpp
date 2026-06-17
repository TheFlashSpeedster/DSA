#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter Number: ";
  cin >> n;

  int num = n;
  if (num == 0)
    cout << 1 << endl;
  else {
    int count = 0;
    while (n > 0)
    {
      count++;
      n /= 10;
    }
    cout << count << endl;
  }
}