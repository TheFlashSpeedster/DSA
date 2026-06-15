#include <iostream>
using namespace std;
int main()
{
  int x;
  cout << "Enter Number: ";
  cin >> x;
  if (x % 5 == 0)
  {
    if (x % 3 == 0){
      cout << "Divisible By 5 and 3" << endl;
    }
    else{
      cout << "Condition Failed!" << endl;
    }
  }
  else{
    cout << "Condition Failed!" << endl;
  }
}