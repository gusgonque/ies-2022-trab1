#include <stdio.h>

int contar(char *frase){

    int controle;

    for(controle=0;frase[controle]!='\0';controle++){

    }


    return(controle);
}

int funcPont(char *frase){

    char *pont;
    int cont1,cont2,total=0;

    pont = ",.;:!?()-";

    for(cont1=0;frase[cont1];cont1++){

        for(cont2=0;pont[cont2];cont2++){

            if(frase[cont1] == pont[cont2]){

                total++;

                if(frase[cont1+1] == '.'){

                    if(frase[cont1+2] == '.'){
                        cont1 = cont1 + 2;
                    }
                }
            }
        }
    }

    return(total);
}
int funcNum(char *frase){

    int cont1,total=0;

    for(cont1=0;frase[cont1];cont1++){

        if( (frase[cont1]>='0') && (frase[cont1] <= '9') ){

            total++;
        }
    }
    return(total);
}
int funcMin(char *frase){

    int cont,total=0;

    for(cont=0;frase[cont];cont++){

        if( (frase[cont] >= 'a') &&(frase[cont] <='z') ){

            total++;
        }
    }
    return(total);
}

int main(){

    char frase[80];

    printf("Escreva uma frase.\n");
    gets(frase);

    printf("NUMERO DE CARACTERE : %d \n",contar(frase));

    printf("NUMERO DE CARACTERES DE PONTUACAO : %d\n",funcPont(frase));

    printf("NUMERO DE CARACTERES NUMERICOS :%d \n",funcNum(frase));

    printf("NUMERO DE CARACTERES MINUSCULOS :%d\n",funcMin(frase));

    return(0);
}
