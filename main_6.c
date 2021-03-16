#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	

void jogaOsDados(int min, int tam, int qtVezes, int semente);

int main(void) { // Ponto de entrada do Programa 

	printf("Implementando funções\n");
	printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
	printf("RAND_MAX = %d\n", RAND_MAX);
	printf("Simulando 10 lançamentos de um dado:\n");
	jogaOsDados(1, 6, 10, 0);
	printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
	int semente;
	printf("Entre com a semente para gerar uma nova sequencia: ");
	int err = scanf("%d", &semente);
	jogaOsDados(1, 6, 10, semente);
	printf("Sementes diferentes irão gerar resultados diferentes!\n");
	printf("A mesma semente gera o mesmo resultado!\n");

	printf("Escolhendo a semente de forma automatica\n");
	jogaOsDados(1, 6, 10, -1);
	printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
	return 0;
}

void jogaOsDados(int min, int tam, int qtVezes, int semente){
	if (semente > 0)
		srand(semente);
	else if(semente < 0)
		srand(time(NULL));
	printf("( ");
	int dado;
	for(int i = 1; i <= qtVezes; i++){
		dado = min + rand()%tam;
		printf("%d", dado);
		if (i < qtVezes)
			printf(", ");
		else
			printf(")\n");
	}
}