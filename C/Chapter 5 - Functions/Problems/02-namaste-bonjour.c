#include<stdio.h>

void greetIndian(); // function declaration
void greetFrench(); // function declaration

int main(){
  int user;
  printf("Choose Nationality:\n1. Indian\n2. French\n");
  scanf("%d", &user);

  if(user==1) greetIndian();
  if(user==2) greetFrench();
}

void greetIndian(){ // function definition
    printf("Namaste!\n");
}

void greetFrench(){ // function definition
    printf("Bonjour!\n");
}

