// #include<iostream>
// using namespace std;

// int main(){
//   int n;
//   cin >> n;
//   int t = n;
//   int i = 0;
//   int result = 0;
//   while(n!=0){
//     int r = n%2; // 0
//     int q = n/2; // 21
//     n = q; // 21
//     result += r * pow(10,i);
//     i++;
//   }
 
//   cout << t << " = " << result << endl;
  
// }

// (42)=(101010)

#include<iostream>
// #include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    // int q=0;
    int i=0;
    int result=0;
    while(n>0){
        int rem = n%2; //0
        int q = n/2; //21
        n=q;
        // powoften=pow(10,i);
        result += rem*pow(10,i);
        i++;
    }
    cout<<result;
}

