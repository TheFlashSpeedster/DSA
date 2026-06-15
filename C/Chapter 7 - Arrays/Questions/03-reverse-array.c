#include<stdio.h>

void printArray(int a[], int n){
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
  
}

int main(){
  int a[6] = {1,2,3,4,5,6}; // rev = {6,5,4,3,2,1}
  int n = 6;
  printf("Original: ");
  printArray(a, n);
  
  for (int i = 0; i < (n/2); i++)
  {
    int first = a[i]; // 1
    int second = a[n-1-i]; // 5
    a[i] = second;
    a[n-1-i] = first;
  }
  
  printf("Reversed: ");
  printArray(a, n);
}