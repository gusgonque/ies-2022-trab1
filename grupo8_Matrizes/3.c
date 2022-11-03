#include <stdio.h>

void lerMatriz(int m[][4]) {
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}

void imprimirMatriz(int m[][4]) {
    int i,j;
    printf("Elementos das Matrizes: \n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void somarLinhas(int m[][4]) {
    int i,j, somaLinha = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 4; j++) {
            somaLinha += m[i][j];
        }
        printf("Soma da linha %d: %d\n", i, somaLinha);
        somaLinha = 0;
    }
}

int main()
{
    int m[3][4];

    lerMatriz(m);
    imprimirMatriz(m);
    somarLinhas(m);
    return 0;
}

