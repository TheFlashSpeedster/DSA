#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number: ";
  cin>>n;
  if(n>=100 && n<=999){
    cout<<"Yes"<<endl;
  }
  else{
    cout<<"Not a 3-digit number"<<endl;
  }
}