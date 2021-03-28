#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char nome[10];
    float potencia;
    int ano;
}Tcarro;
int main(){
    Tcarro*ptr;
    ptr = malloc(sizeof(Tcarro));
    if(ptr==NULL){
        printf("Erro\n");
        return -1;
    }
     printf("Digite o nome do carro:\n");
     gets(ptr->nome);
     printf("Digite a potencia do carro:\n");
     scanf("%f",&ptr->potencia);
     printf("Digite o ano do carro:\n");
     scanf("%d",&ptr->ano);
     printf("Dados armazenados do carro:\n");
     puts(ptr->nome);
     printf("Potencia: %.1f\n",ptr->potencia);
     printf("Ano: %d\n",ptr->ano);
     free(ptr);
     system("PAUSE");
     return(0);


}
