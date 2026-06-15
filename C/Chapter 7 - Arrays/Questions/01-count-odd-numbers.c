// Function to count the number of odd numbers in an array

#include<stdio.h>

int countOdd(int a[], int n){
  int count=0;
  for (int i = 0; i < n; i++)
  {
    if(a[i]%2!=0) count++;
  }
  return count;
}

int main(){
  int a[7] = {1, 2, 3, 4, 5, 6, 7};
  int odd = countOdd(a, 7);
  printf("No of Odd Numbers: %d\n", odd);
}