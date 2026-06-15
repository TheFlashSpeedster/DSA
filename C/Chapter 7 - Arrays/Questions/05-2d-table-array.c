// store table of 2 and 3 in 2d array
#include<stdio.h>

void storeTable(int table[][10], int r, int c, int number){
  for (int i = 0; i < c; i++) // c = 10
  {
    table[r][i] = number * (i+1);
  }
}

void printTable(int table[][10], int r, int c){
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      printf("%d\t", table[i][j]);
    }
    printf("\n");
  }
}

int main(){
  int table[2][10];
  storeTable(table, 0, 10, 2); // 0th row, 10 columns, pass number '2'
  storeTable(table, 1, 10, 3); // 1th row, 10 columns, pass number '3'
  printTable(table, 2, 10);
}