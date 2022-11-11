#include<stdio.h>

char* strcpy2(char* dest, char* str)
{
    int i = 0;

    while ((dest[i] = str[i]) != '\0')
    {
        i++;
    }

    return dest;
}

int main(){
    char str[100];
    char dest[25];

    scanf("%s",str);
    strcpy2(dest,str);
    printf("%s",dest);
    return 0;
}
