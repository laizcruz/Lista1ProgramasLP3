

#include <stdio.h>


int main(void) { // Ponto de entrada do Programa 
  char name[100]; //name[0], name
  printf("Hello World!\n");    //output
  printf("Whats your name?"); 
  int err = scanf("%s", name);          //input
  printf("Hi %s, good to see you here!!!\n", name);
	printf("Ok\n");
  return 0;
}