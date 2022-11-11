#include <stdio.h>
#include <string.h>

void Letra(char str[], char c, int pos){
    int i, j;
    char strAux[50];
    strcpy(strAux, str);
    for (i = 0; str[i] ; ++i) {
        if(i == pos) {
            str[i] = c;
            for (j = i+1; str[j]; ++j){
                str[j] = strAux[j-1];
            }
            str[j+1] = '\0';
        }
    }
}

int main(){
    char strTeste[] = "abcabcabcAbc";
    Letra(strTeste, 'X', 2);
    printf("%s", strTeste);
    return 0;
}
