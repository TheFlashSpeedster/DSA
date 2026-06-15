#include <iostream>
using namespace std;
int main() {
    char ch;
    cout<<"Enter Alphabet: ";
    cin>>ch;
    // a-z: 97-122 (Small Alphabets)
    // A-Z: 65-90 (Capital Alphabets)
    // 0-9: 48-57 (Numbers)
    int ascii = (int)ch;
    if ((ascii>=97 && ascii<=122) || ascii>=65 && ascii<=90){
        cout<<"It is an Alphabet: "<<ascii<<endl;
    }
    else {
        cout<<"Not an Alphabet: "<<ascii<<endl;
    }
}