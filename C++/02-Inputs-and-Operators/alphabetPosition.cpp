#include<iostream>
using namespace std;

// Find Position of the Alphabet (Capitals Only; A-Z)
int main(){
  char alpha;
  cout<<"Enter Alphabet (A-Z): "<<endl;
  cin>>alpha;
  int position;
  position = (int)alpha-64;
  cout<<"Position: "<<position;
  return 0;
}