#include<stdio.h>
#include <stdlib.h>
#include<time.h>
typedef struct{
    int v1[6];
    int v2[6];
    int v3[6];
}Tsorteios;
int main()
{
    Tsorteios dados[6];
    int i;
    int vet1[6], vet2[6],vet3[6];
    srand(time(NULL));
    for(i=0;i<6;i++){
        vet1[i]=rand()%59+1;
        vet1[i]=rand()%59+1;
        vet1[i]=rand()%59+1;
        vet1[i]=rand()%59+1;
        vet1[i]=rand()%59+1;
        vet1[i]=rand()%59+1;
    }

    for(i=0;i<6;i++){
          printf("[%d]",dados[i].v1);
        }
        printf("\n");

    for(i=0;i<6;i++){
        vet2[i]=rand()%59+1;
        vet2[i]=rand()%59+1;
        vet2[i]=rand()%59+1;
        vet2[i]=rand()%59+1;
        vet2[i]=rand()%59+1;
        vet2[i]=rand()%59+1;
    }
    for(i=0;i<6;i++){
        printf("[%d]",dados[i].v2);
        }
        printf("\n");

    for(i=0;i<6;i++){
        vet3[i]=rand()%59+1;
        vet3[i]=rand()%59+1;
        vet3[i]=rand()%59+1;
        vet3[i]=rand()%59+1;
        vet3[i]=rand()%59+1;
        vet3[i]=rand()%59+1;
    }
        for(i=0;i<6;i++){
        printf("[%d]",dados[i].v3);
        }


    system("PAUSE");
    return 0;
}
