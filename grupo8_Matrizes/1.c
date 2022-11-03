#include <stdio.h>

void lerMatriz(int m[][3]) {
    int i, j;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}


void imprimirMatriz(int m[][3]) {
    int i,j;
    printf("Elementos das Matrizes: ");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("[%d], ", m[i][j]);
        }
    }
    printf("\n");
}

void somarImpares(int m[][3]) {
    int i,j, somaImp = 0;

    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(m[i][j] % 2 != 0) {
                somaImp += m[i][j];
            }
        }
    }

    printf("Soma dos impares : %d", somaImp);
}

int main()
{
    int m[3][3];

    lerMatriz(m);
    imprimirMatriz(m);
    somarImpares(m);
    return 0;
}

