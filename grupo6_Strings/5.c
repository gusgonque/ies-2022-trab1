#include <stdio.h>

int ler(){
    while(1){
        char str[100];
        int r;
        scanf("%s",str);
        if(strcmp(str,"SIM") == 0){
            return 1;
        }
        else if(strcmp(str,"NAO")== 0){
            return 0;
        }

    }
    
}
int main(){
    ler();
}
