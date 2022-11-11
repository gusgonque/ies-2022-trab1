# include <stdio.h>
 

void reverse(char *str){
   if (*str)
   {
       reverse(str+1);
       printf("%c", *str);
   }
}
void normal(char *str){
    if(*str == '\0'){
        return ;
    }
    printf("%c",*str);
    normal(str+1);
}

int main()
{
   char str[300];
   scanf("%[^\n]s",str);
   reverse(str);
   printf("\n");
   normal(str);
   return 0;
}
