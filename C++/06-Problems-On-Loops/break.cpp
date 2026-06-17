#include<iostream>
using namespace std;

// break - used to exit from the loop

// WAP - Check Prime or Composite Number

int main(){
  int n;
  cout << "Enter Number: ";
  cin >> n;

  bool prime = true;
  for (int i = 2; i <= n-1; i++)
  {
    if(n%i==0){
      prime = false;
      break;
    }
  }

  if(n==1) cout << n << " is neither prime nor composite" << endl;
  else if (prime==true) cout << n << " is prime" << endl;
  else cout << n << " is composite" << endl;
}