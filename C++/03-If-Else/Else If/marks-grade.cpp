#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter Marks: ";
  cin>>n;
  if (n>=91){
    cout<<"Excellent"<<endl;
  }
  else if (n>=81){
    cout<<"Very Good"<<endl;
  }
  else if (n>=71){
    cout<<"Good"<<endl;
  }
  else if (n>=61){
    cout<<"Can Do Better"<<endl;
  }
  else if (n>=51){
    cout<<"Average"<<endl;
  }
  else if (n>=40){
    cout<<"Below Average"<<endl;
  }
  else if (n<40){
    cout<<"Fail"<<endl;
  }
}
