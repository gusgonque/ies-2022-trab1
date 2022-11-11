#include <stdio.h>

void soletra_str(char strIn[]){
    int i;
    for (i = 0; strIn[i] ; ++i) {
        if(strIn[i] == '0')
            printf("zero\n");
        if(strIn[i] == '1')
            printf("um\n");
        if(strIn[i] == '2')
            printf("dois\n");
        if(strIn[i] == '3')
            printf("tres\n");
        if(strIn[i] == '4')
            printf("quatro\n");
        if(strIn[i] == '5')
            printf("cinco\n");
        if(strIn[i] == '6')
            printf("seis\n");
        if(strIn[i] == '7')
            printf("sete\n");
        if(strIn[i] == '8')
            printf("oito\n");
        if(strIn[i] == '9')
            printf("nove\n");
    }
}

int main(){
    char strTeste[] = "1234856";

    soletra_str(strTeste);
    return 0;
}
