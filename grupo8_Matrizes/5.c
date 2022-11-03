#include <stdio.h>

void lerMatriz(int m[4][4]) {
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}


void imprimirMatriz(int m[4][4]) {
    int i,j;
    printf("Elementos das Matrizes: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            printf("[%d] ", m[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void imprimirDiagonalP(int m[4][4]) {
    int i;
    printf("Diagonal principal: \n");
    for(i = 0; i < 4; i++)
        printf("%d\n", m[i][i]);
}

int main()
{
    int m[4][4];

    lerMatriz(m);
    imprimirMatriz(m);
    imprimirDiagonalP(m);
    return 0;
}


