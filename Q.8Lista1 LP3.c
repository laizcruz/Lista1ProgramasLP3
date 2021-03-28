#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int nrosRepetidos(int *ptr1, int *ptr2){
   int i,j, cont;
   ptr1= malloc(6*sizeof(int));
   if(ptr1==NULL){
    printf("Erro!\n");
    return -1;
   }
   ptr2= malloc(6*sizeof(int));
   if(ptr2==NULL){
    printf("Erro!\n");
    return -1;
   }
        for(i=0;i<6;i++){
        for(j=0;j<6;j++){
                if(ptr1[i]== ptr2[j]){
                    cont++;
                }
        }
    }
    printf("%d",cont);
    free(ptr1);
    free(ptr2);
    return (0);
}


int main()
{
    int i, repetidos=0;
    int *ptrv1,*ptrv2,*ptrv3;
    ptrv1= malloc(6*sizeof(int));
    if(ptrv1==NULL){
    exit -1;
    }
    ptrv2= malloc(6*sizeof(int));
    if(ptrv2==NULL){
    printf("Erro!\n");
    exit -1;
    }
    ptrv3= malloc(6*sizeof(int));
    if(ptrv3==NULL){
    printf("Erro!\n");
    exit -1;
    }
    srand(time(NULL));
    for(i=0;i<6;i++){
        ptrv1[i]=rand()%59+1;
        ptrv1[i]=rand()%59+1;
        ptrv1[i]=rand()%59+1;
        ptrv1[i]=rand()%59+1;
        ptrv1[i]=rand()%59+1;
        ptrv1[i]=rand()%59+1;
    }
    for(i=0;i<6;i++){
        printf("[%d]",ptrv1[i]);
        }
        printf("\n");

    for(i=0;i<6;i++){
        ptrv2[i]=rand()%59+1;
        ptrv2[i]=rand()%59+1;
        ptrv2[i]=rand()%59+1;
        ptrv2[i]=rand()%59+1;
        ptrv2[i]=rand()%59+1;
        ptrv2[i]=rand()%59+1;
    }
    for(i=0;i<6;i++){
        printf("[%d]",ptrv2[i]);
        }
        printf("\n");

    for(i=0;i<6;i++){
        ptrv3[i]=rand()%59+1;
        ptrv3[i]=rand()%59+1;
        ptrv3[i]=rand()%59+1;
        ptrv3[i]=rand()%59+1;
        ptrv3[i]=rand()%59+1;
        ptrv3[i]=rand()%59+1;
    }
        for(i=0;i<6;i++){
        printf("[%d]",ptrv3[i]);
        }
         printf("\n");
    repetidos = nrosRepetidos(ptrv1,ptrv2);
    printf("Repetidos entre os dois primeiros jogos: %d\n",repetidos);
    free(ptrv1);
    free(ptrv2);
    free(ptrv3);
    system("PAUSE");
    return 0;
}

