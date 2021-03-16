#include <stdio.h>
#include <stdlib.h>  	//para poder utilizar a função rand()
#include <time.h> 		//para poder utilizar a funçao time()	

typedef struct{
    int *jogo;  		// núeros sorteados
    int qtVezes;    // quantidade de sorteios
    int min;       	// valor inicial do intervalo
		int tam;				// tamanho do intervalo
} tJogo;

void jogaOsDados(tJogo jogo, int semente);
void printJogo(tJogo jogo);

int main(void) { // Ponto de entrada do Programa 

	printf("Trabalhando com tipos de dados e estruturas\n");
	printf("A função rand() gera um inteiro entre 0 e RAND_MAX\n");
	printf("RAND_MAX = %d\n", RAND_MAX);
	// Declarando e Inicializando o jogo
	tJogo jogo;
	jogo.qtVezes = 10;
	jogo.min = 1;
	jogo.tam = 6;
	jogo.jogo = (int *) malloc(jogo.qtVezes*sizeof(int));
	printf("Simulando 10 lançamentos de um dado:\n");
	jogaOsDados(jogo, 0);
	printJogo(jogo);
	printf("Todas as vezes que rodar este exemplo vai gerar o mesmo resultado!\n");
	int semente;
	printf("Entre com a semente para gerar uma nova sequencia: ");
	int err = scanf("%d", &semente);
	jogaOsDados(jogo, semente);
	printJogo(jogo);
	printf("Sementes diferentes irão gerar resultados diferentes!\n");
	printf("A mesma semente gera o mesmo resultado!\n");
	printf("Escolhendo a semente de forma automatica\n");
	jogaOsDados(jogo, -1);
	printJogo(jogo);
	printf("Todas as vezes que rodar este exemplo gera diferentes resultados!\n");
	free(jogo.jogo);
	return 0;
}

void jogaOsDados(tJogo jogo, int semente){
	if (semente > 0)
		srand(semente);
	else if(semente < 0)
		srand(time(NULL));
	for(int i = 0; i < jogo.qtVezes; i++){
		jogo.jogo[i] = jogo.min + rand()%jogo.tam;
	}
}

void printJogo(tJogo jogo){
	printf("( ");
	for(int i = 1; i <= jogo.qtVezes; i++){
		printf("%d", jogo.jogo[i-1]);
		if (i < jogo.qtVezes)
			printf(", ");
		else
			printf(")\n");
	}
}