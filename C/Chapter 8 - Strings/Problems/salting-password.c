// Find the salted form of a password entered by user if the salt is "123" & added at the end.

#include<stdio.h>
#include<string.h>

void salting(char pass[]){
  char salt[] = "123";
  char newPass[200];
  strcpy(newPass, pass);
  strcat(newPass, salt);
  printf("New Pass: %s\n", newPass);
}

int main(){
  char password[100];
  scanf("%s", password);
  salting(password);
}