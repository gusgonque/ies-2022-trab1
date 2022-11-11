#include <stdio.h>
#include <string.h>

int ondeTemBranco(char str[]){
    for (int i = 0; str[i] ; ++i) {
        if(str[i] == ' ')
            return i;
    }
    return -1;
}

int main(){
    char strTeste[] = "abcabc abcAbc";
    printf("%d", ondeTemBranco(strTeste));
    return 0;
}
