#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
	char nome[100];
	printf("Hello World!\n");
	printf("Whats your name?\n");
	gets(nome);
	printf("Hi %s, good to see you here!!!\n", nome);
	system("PAUSE");
	return(0);
}
