#include <iostream>
using namespace std;
int main()
{
  int cp, sp;
  cout<<"Enter Cost Price: ₹";
  cin>>cp;
  cout<<"Enter Selling Price: ₹";
  cin>>sp;

  if(sp>cp){
    cout<<"Profit: ₹"<<sp-cp<<endl;
  }
  if(cp>sp){
    cout<<"Loss: ₹"<<cp-sp<<endl;
  }
  if(sp==cp){
    cout<<"Neither Profit Nor Loss!"<<endl;
  }
}