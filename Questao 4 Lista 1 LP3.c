#include<stdio.h>
#include<time.h>

int main(){
    int numAleatorio;
    int tent;
    srand(time(NULL));
    numAleatorio = rand()%99+1;
    printf("Adivinhe um numero de 1 a 100!\nVoce tem no maximo 10 tentativas!");
    printf("Digite um numero de 1 a 100:\n");
    scanf("%d",&tent);
    if(numAleatorio==tent){
        printf("Voce acertou!!!\n");
    }
    else{
            if(numAleatorio<tent){
                printf("O numero gerado eh menor!\n");
            }
            if(numAleatorio>tent){
                printf("O numero gerado eh maior!\n");
            }
            for(i=0;i<9;i++){
            printf("Digite um numero de 1 a 100:\n");
            scanf("%d",&tent);

            if(numAleatorio<tent){
                printf("O numero gerado eh menor!\n");
            }
            if(numAleatorio>tent){
                printf("O numero gerado eh maior!\n");
            }
        }
    }
    printf("Chances nulas!\n");
    system("PAUSE");
    return(0);
    }
