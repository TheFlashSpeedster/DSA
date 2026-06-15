#include<stdio.h>

void print(int i, int arr[i][3]){
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("%d ", arr[i][j]);
    }
  }
}

int main(){
  int r=3;
  int c=3;
  int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };
  for (int i = 0; i < 3; i++){
  {
    for (int n = 0; n < 3; n++)
    {
      printf("%d ", a[i][n]);
    }
    printf(" : ");

    int sum = 0;
    for (int j = 0; j < 3; j++)
    {
      sum += a[i][j];
    }
    
    printf("%d \n", sum);
    };
  }
  
}