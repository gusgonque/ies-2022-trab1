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

void imprimirDiagonalS(int m[4][4]) {
    int i,j;
    printf("Diagonal secundaria: \n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j <4; j++) {
            if(i + j == 4 - 1) {
                printf("%d\n", m[i][j]);
            }
        }
    }
}

int main()
{
    int m[4][4];

    lerMatriz(m);
    imprimirMatriz(m);
    imprimirDiagonalS(m);
    return 0;
}

