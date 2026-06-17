#include<iostream>
using namespace std;

int main(){
  int t = 10;
  int count = 1;
  while (t/=2) // 10/2 = 5 => 5/2 = 2 => 2/2 = 1 => 1/2 = 0 (false) -- runs 3 times
  {
    cout<< count << " Hello" << endl;
    count++;
  }
}