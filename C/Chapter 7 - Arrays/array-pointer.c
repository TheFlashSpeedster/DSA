#include<stdio.h>
int main(){
  int arr[5] = {1,2,3,4,5};
  int *ptr1 = &arr[0];
  int *ptr2 = arr;

  // 'arr' points to '&arr[0]'
  printf("ptr1 = %p\nptr2 = %p\n", ptr1, ptr2);
  printf("ptr1 value = %d\nptr2 value = %d\n", *ptr1, *ptr2);

  // ptr1 or ptr2 = address
  // *ptr1 or *ptr2 = value

}