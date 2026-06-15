#include<stdio.h>
#include<math.h>

void areaCircle(float radius){
  float area = 3.14 * pow(radius, 2);
  printf("Area of Circle: %f\n", area);
}

void areaSquare(float side){
  float area = pow(side, 2);
  printf("Area of Square: %f\n", area);
}
void areaRectangle(float length, float breadth){
  float area = length * breadth;
  printf("Area of Rectangle: %f\n", area);
}

int main(){
  float radius, side, length, breadth;

  radius = 3;
  areaCircle(radius);
  
  side = 4;
  areaSquare(side);

  length = 2;
  breadth = 3;
  areaRectangle(length, breadth);
}