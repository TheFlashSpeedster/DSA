#include<iostream>
using namespace std;
int main(){
  char letter;
  cout<<"Enter Letter: ";
  cin>>letter;
  // vowels: aeiou (a=97 e=101 i=105 o=111 u=117)
  // consonants: non-vowels
  int ascii = (int)letter;
  if ((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90)){
    if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'){
      cout<<"Vowel"<<endl;
    }
    else{
      cout<<"Consonant"<<endl;
    }
  }
  else{
    cout<<"Not an Alphabet"<<endl;
  }
}
