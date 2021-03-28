#include<stdio.h>
#include<string.h>

int main(){
    char frase[200];
    char palavra[20];
    int i,j;
    char conc[200];
    printf("Digite uma frase:\n");
    gets(frase);
    printf("Digite uma palavra:\n");
    gets(palavra);
    for(i=0;i<200;i++){
        for(j=0;j<20;j++){
           conc[200] =frase[200]+palavra[20];
        }
    }
    printf("Concatenacao da frase e da palavra:\n");
    printf("%s",conc);
    system("PAUSE");
    return(0);
    }
