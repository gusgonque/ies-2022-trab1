#include <stdio.h>
#define MAX 3

int notas(int vet[]) {
    for(int i = 0; i < 3; i++) {
        scanf("%d", &vet[i]);
    }
    return *vet;
}

int main() {
    int vet[MAX];

    notas(vet);

    for(int i = 0; i < 3; i++) {
        printf("Vetor[%d]: %d\n", i, vet[i]);
    }

    return 0;
}
