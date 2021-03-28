#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    int i;
    int num1,num2,num3,num4,num5,num6;
    srand(time(NULL));
   for(i=0;i<3;i++){
        num1=rand()%59+1;
        num2=rand()%59+1;
        num3=rand()%59+1;
        num4=rand()%59+1;
        num5=rand()%59+1;
        num6=rand()%59+1;
        printf("Numeros gerados: [%d] [%d] [%d] [%d] [%d] [%d]\n",num1,num2,num3,num4,num5,num6);
    }
       system("PAUSE");
    return 0;
}
