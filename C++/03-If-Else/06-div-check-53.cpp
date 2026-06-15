#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter Number: ";
  cin>>n;
  if(n%5==0 & n%3==0){ // OR (n%15==0)
    cout<<"Yes, It is divisible by 5 and 3"<<endl;
  }
  else{
    cout<<"No"<<endl;
  }
}