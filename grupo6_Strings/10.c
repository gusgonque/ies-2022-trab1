#include <stdio.h>

void deLetra(char str[], char c){
    int i, j;
    for (i = 0; str[i] ; ++i) {
        if(str[i] == c)
            for (j = i; str[j]; ++j)
                str[j] = str[j+1];
        str[j] = '\0';
    }
}

int main(){
    char strTeste[] = "abcabcabcAbc";
    deLetra(strTeste, 'a');
    printf("%s", strTeste);
    return 0;
}
