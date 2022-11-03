#include <stdio.h>

void imprimirMatriz(int m[][3]) {
    int i,j;
    printf("Elementos das Matrizes: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    int m[3][3],i,j,menor,maior;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&m[i][j]);
            if (i == 0 && j == 0){
                menor=m[0][0];
                maior=m[0][0];
            }
            if(m[i][j]<menor){
                menor=m[i][j];
            }
            if(m[i][j]>maior){
                maior=m[i][j];
            }
        }
    }
    imprimirMatriz(m);
    printf("O menor numero e: [%d]\n",menor);
    printf("O maior numero e: [%d]\n",maior);
    return 0;
}

