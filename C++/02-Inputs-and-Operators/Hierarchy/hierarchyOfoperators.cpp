#include <iostream>
using namespace std;

int main()
{
  // Hierarchy of Operators
  /* 
  Postfix/Brackets; Unary (type, sizeof, etc.); 
  Multiplicative (*,/,%); Additive (+-); Shift (); 
  Relational (<,<=,=,>,>=); Equality (==, !=); 
  Bitwise (&,^,|,&&).....

  NOTE: 
  1. Follows Left to Right ->>> [except Unary (RtoL)]
  */
  int i = (2 * 3 / 4 + 4 / 4 + 8 - 2 + 5 / 8);
  // (6/4) + (4/4) + (8-2) + (5/8)
  // (1) + (1) + (6) + (0)
  // (8)
  cout << i;
}