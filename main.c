

#include <stdio.h>


int main(void) { // Ponto de entrada do Programa 
  char name[100];
  printf("Hello World\n");    //output
  printf("Whats your name?"); 
  int err = scanf("%s", name);          //input
  printf("Hi %s, good to see you here!!!\n", name);
  return 0;
}