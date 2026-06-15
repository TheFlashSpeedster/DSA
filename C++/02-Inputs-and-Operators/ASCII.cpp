#include <iostream>
using namespace std;

int main()
{
  // ASCII Values of Characters
  /*
  Important ASCII Values:
  A = 65 ; Z = 90
  a = 97 ; z = 122
  0 (zero) = 48 ; 9 (nine) = 57
  */

  char letter_A = 'A';
  cout<<letter_A<<endl;
  cout<<int(letter_A)<<endl; // ASCII of "A" is 65

  char letter_a = 'a';
  cout<<letter_a<<endl;
  cout<<int(letter_a)<<endl; // ASCII of "a" is 97
  return 0;
}