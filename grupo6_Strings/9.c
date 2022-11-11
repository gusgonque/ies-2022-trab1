#include <stdio.h>
#include <string.h>

int main(){
    char prenome[20][50], sobrenome[20][50], entrada[50], aux[50];
    int numNomes, totLetras;
    for (numNomes = totLetras = 0; numNomes < 20; ++numNomes) {
        scanf("%s", &entrada);
        if(strcmp(entrada,"FIM"))
            break;
        strcpy(prenome[numNomes], entrada);
        totLetras += strlen(entrada);
        scanf("%s", &entrada);
        strcpy(sobrenome[numNomes], entrada);
        totLetras += strlen(entrada);
    }
    printf("num medio de letras por nome: %d", totLetras/numNomes);
    return 0;
}