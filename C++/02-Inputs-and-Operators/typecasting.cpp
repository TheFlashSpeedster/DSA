#include<iostream>
using namespace std;

int main(){
  char letter = 'A';
  cout<<(int)letter<<endl; // 65 (ASCII Value of 'A')
  
  float num = 89.12;
  cout<<(int)num<<endl; // 89 (int part of '89.12')

  int x = 65;
  cout<<(char)x<<endl; // A (68 -> ASCII Value)

  char a = 'a'; // ASCII = 97
  cout<<(int)a+3<<endl; // 97+10 = 100

  // print 'H'
  // A = 65, B = 66,.... H = 72
  cout<<(char)72<<endl;

  return 0;
}