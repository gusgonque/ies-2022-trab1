#include<stdio.h>

void funcao(int x, char operador, int y){
    if(operador == '+')
        printf("%d\n", x + y);
    if(operador == '-')
        printf("%d\n", x - y);
    if(operador == '*')
        printf("%d\n", x * y);
    if(operador == '/')
        printf("%d\n", x / y);
}

int main(){
    int x, y;
    char operador;
    printf("Digite a funcao.\n - ");
    scanf("%d %c %d", &x, &operador, &y);
    funcao(x, operador, y);
    return 0;
}
