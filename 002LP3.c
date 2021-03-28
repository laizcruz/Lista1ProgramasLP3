#include<stdio.h>
#include<stdlib.h>

int main(void){
    printf("Operadores bit a bit em C\n");
    printf("OPERADOR AND (&)\n");
    int a[4] = {0011};
    int b[4] = {0101};
    int c[4];
    int i, j;
    for(i=0;i<3;i++){
    printf("a=%d",a[i]);
    }
    for(i=0;i<3;i++){
    printf("b=%d",b[i]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i]==b[j]){
                c[4]=1;
            }
            else c[4]=0;
        }

            printf("%d",c[i]);
     }

    system("PAUSE");
    return(0);
}
