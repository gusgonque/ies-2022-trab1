#include <stdio.h>
int main()
{
    char str[100];
    int i, count = 0;
    scanf("%[^\n]",str);

    for (i = 0; str[i] != '\0'; i++)
    {
       
        if((str[i]!=' ' && str[i+1]==' ')||(str[i+1]=='\0' && str[i]!=' '))
        {
            count++;
        }
        
    }

    printf("Total de palavras = %d", count );

    return 0;
}
