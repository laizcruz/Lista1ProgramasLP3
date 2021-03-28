#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
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
        printf("[%d]",vet1[i]);
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
        printf("[%d]",vet2[i]);
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
        printf("[%d]",vet3[i]);
        }


    system("PAUSE");
    return 0;
}
