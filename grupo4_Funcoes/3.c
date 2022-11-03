#include <stdio.h>

double fatorialRecursivo(int x){
    if(x>1)
        return x*fatorialRecursivo(x-1);
    else
        return x;
}

double potencia(int x, int n){
    int i, res;
    if(n<=0)
        return 1;
    for( i=0, res=x ; i<n-1 ; i++ ){
        res*=x;
    }
    return res;
}

//Funcao auxiliar que faz o calculo de Ex a partir de i
double calculaExAux(int x, int i){
    double y = potencia(x,i) / fatorialRecursivo(i);
    if (y>0.00001)
        return y + calculaExAux(x,++i);
    else
        return y;
}

//Calculo do Ex: ex = 1 + x + x2/2! + x3/3! + ...
double calculaEx(double x){
    return 1+x+calculaExAux(x,1);
}

int main() {
    int x;
    printf("Digite x para calcular o Ex de x.\n");
    scanf("%d", &x);
    printf("Ex de %d = %f\n",x, calculaEx(x));
    return 0;
}


