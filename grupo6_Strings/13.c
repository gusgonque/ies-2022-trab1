#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int converte(char num[], int base){
    int r = 0;
    int len = strlen(num);
    int p = 0;
    int base_pos;
    
    for(int i = len-1; i >= 0; i--){
        int x = num[i] - 48;
        r += x * pow(base, p);
        p++;
    }
    printf("%d\n",r);
}

int main(){
    char num[50];
    int base;
    
    scanf("%s %d",num,&base);
    converte(num,base);

    return 0;
}
