#include <stdio.h>

//Calcula a n-esima potencia de x
int potencia(int x, int n){
    int i, res;
    for( i=0, res=x ; i<n-1 ; i++ ){
        res*=x;
    }
    return res;
}

int main() {
    int x, y;
    printf("Digite x e y para conseguir a potencia y de x.\n");
    scanf("%d %d", &x, &y);
    printf("%d^%d = %d\n",x,y, potencia(x,y));
    return 0;
}
