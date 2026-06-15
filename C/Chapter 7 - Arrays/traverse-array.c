#include<stdio.h>
int main(){
  int numbers[5] = {1,2,3,4,5};
  int *ptr = numbers; // points to first element [0]

  printf("Enter Elements: ");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", (ptr+i)); // (ptr+i) or &arr[i]
  }

  // Print Array
  for (int i = 0; i < 5; i++)
  {
    printf("Index %d = %d\n", i, *(ptr+i)); // *(ptr+i) or arr[i]
  }
}