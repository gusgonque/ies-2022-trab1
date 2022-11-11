#include <stdio.h>
int main(){
    char nome[100];
    char end[100];
    char fone[100];
    char idade[100];
    char string_res[100];
    printf("Insira seu nome\n");
    scanf("%[^\n]%*c",nome);
    printf("Insira seu endereco\n");
    scanf("%[^\n]%*c",end);
    printf("Insira seu telefone\n");
    scanf("%s%*c",fone);
    printf("Insira sua idade\n");
    scanf("%s%*c",idade);
    sprintf(string_res, "Seu nome %s, voce tem %s anos ,mora na rua %s e seu telefone e %s",nome,idade,end,fone);
    printf("%s",string_res);
}
