#include<iostream>
using namespace std;

int main(){
  float physics = 90;
  float chemistry = 91;
  float biology = 92;
  float maths = 93;
  float english = 94;

  float percent = (physics+chemistry+biology+maths+english)/5;
  cout<<"Marks: "<<percent<<"%";
}