#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter Number: ";
  cin >> x;
  if (x % 5 == 0 || x % 3 == 0)
  {
    if (x % 15 != 0){
      cout << "Divisible By 5 or 3, But Not By 15" << endl;
    }
    else{
      cout << "Condition Failed!" << endl;
    }
  }
  else{
    cout << "Condition Failed!" << endl;
  }
}