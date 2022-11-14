#include<stdio.h>

void funcao(){
    int i;
    printf("Tabela ASCII em decimal - hexadecimal - caracter:\n");
    for( i=0 ; i<127 ; i++) {
            printf("%d - ", i);
            printf("%x - ", i);
            printf("%c\n", i);
    }
}

int main(){
    funcao();
    return 0;
}
