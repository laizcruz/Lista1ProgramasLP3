#include <stdio.h>


void naoTrocaValores(double x, double y);
void trocaValores(double *x, double *y);

int main(void) { // Ponto de entrada do Programa 

printf("Trabalhando com passagem de parâmetros\n");
double x, y;
x = 3.14;
y = 6.28;
printf("1- x = %f, y = %f\n", x, y);
naoTrocaValores(x, y);
printf("4- x = %f, y = %f\n", x, y);
trocaValores(&x, &y);
printf("7- x = %f, y = %f\n", x, y);
return 0;
}

void naoTrocaValores(double x, double y){
  double z;
  printf("2- x = %f, y = %f\n", x, y);
  z = x;
  x = y;
  y = z;
  printf("3- x = %f, y = %f\n", x, y);
}

void trocaValores(double *x, double *y){
  double z;
  printf("5- x = %f, y = %f\n", *x, *y);
  z = *x;
  *x = *y;
  *y = z;
  printf("6- x = %f, y = %f\n", *x, *y);
}