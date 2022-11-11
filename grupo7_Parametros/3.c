#include <stdio.h>


int calc(int vet[], int *media, int *menorValor, int *maiorValor) {

    for(int i = 0; i < 5; i++) {
        if(vet[i] >= 0) {
            *media += vet[i];
        }
        if(i > 0) {
            if(vet[i] > vet[i - 1]) {
                *maiorValor = vet[i];
            }
        }
        if(vet[i] < vet[i - 1]) {
            *menorValor = vet[i];
        }

    }
    *media /= 5;
    return *media, *menorValor, *maiorValor;


}

int main() {
    int vet[5] = {1, 2, 3, 4, -2};
    int media = 0, menorValor, maiorValor;
    calc(vet, &media, &menorValor, &maiorValor);

    printf("Media: %d\n", media);
    printf("Menor Valor: %d\n", menorValor);
    printf("Maior Valor: %d\n", maiorValor);
    return 0;
}
