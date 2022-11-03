#include <stdio.h>

void lerMatriz(int m[][4]) {
    int i, j;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &m[i][j]);
        }
    }
}


void imprimirMatriz(int m[][4]) {
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

void somarColunas(int m[][4]) {
    int i,j, somaCol1 = 0, somaCol2 = 0, somaCol3 = 0, somaCol4 = 0;

    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            if(j == 0) {
                somaCol1 += m[i][j];
            }else if(j == 1) {
                somaCol2 += m[i][j];
            }else if(j == 2) {
                somaCol3 += m[i][j];
            }else if(j == 3) {
                somaCol4 += m[i][j];
            }
        }
    }

    printf("Soma da coluna 1: %d\n", somaCol1);
    printf("Soma da coluna 2: %d\n", somaCol2);
    printf("Soma da coluna 3: %d\n", somaCol3);
    printf("Soma da coluna 4: %d\n", somaCol4);
}

int main()
{
    int m[4][4];

    lerMatriz(m);
    imprimirMatriz(m);
    somarColunas(m);
    return 0;
}

