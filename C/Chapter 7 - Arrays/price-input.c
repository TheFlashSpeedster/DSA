// take 3 price input and store in array

#include<stdio.h>
int main(){
  float price[3];
  scanf("%f", &price[0]);
  scanf("%f", &price[1]);
  scanf("%f", &price[2]);

  // 18% gst apply
  printf("price 1 = %f\n", price[0] + (0.18*price[0]));
  printf("price 1 = %f\n", price[1] + (0.18*price[1]));
  printf("price 1 = %f\n", price[2] + (0.18*price[2]));
}