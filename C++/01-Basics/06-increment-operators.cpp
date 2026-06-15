#include<iostream>
using namespace std;

int main(){
  // Pre-Increment: ++x
  // Post-Increment: x++
  // Pre-Decrement: ++x
  // Post-Decrement: x++
  
  // Normal Way
  int x = 5;
  x++;
  cout<<x<<endl; // 6 (x=6)
  x--;
  cout<<x<<endl; // 5 (x=5)
  ++x;
  cout<<x<<endl; // 6 (x=6)
  --x;
  cout<<x<<endl; // 5 (x=5)
  cout<<endl;

  // Directly Using Operator in Print
  int y = 5;
  cout<<y++<<endl; // 5 (x=6)
  cout<<y--<<endl; // 6 (x=5)
  cout<<++y<<endl; // 6 (x=6)
  cout<<--y<<endl; // 5 (x=5)

  return 0;
}