#include <stdio.h>

int operacoes(int num1, int num2) {
    int soma, sub, mult;
    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    return printf("soma: %d\n", soma),
            printf("subtracao: %d\n", sub),
            printf("produto: %d\n", mult);
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    operacoes(n1, n2);

    return 0;
}


