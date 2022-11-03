#include <stdio.h>

void precoAVista(double gasto){
    printf("A vista com 10 por cento de desconto = %lf\n", gasto*0.9);
}

void precoDuasVezes(double gasto){
    printf("Em duas vezes com cada parcela = %lf\n", gasto/2.0);
}

double potencia(double x, int n){
    int i;
    double res;
    if(n<=0)
        return 1;
    for( i=0, res=x ; i<n-1 ; i++ ){
        res*=x;
    }
    return res;
}

void precoComJuros(double gasto){
    int numPar;
    printf("Digite o numero de parcelas\n");
    scanf("%d", &numPar);

    double valPar = gasto * potencia(1.03,numPar) / numPar;

    printf("Em %d parcelas, o valor de cada parcela = %lf", numPar, valPar);

}

void pagamento(double gasto){
    int x;
    printf("Decida se vai pagar em: \n1 - A vista com 10 por cento de desconto;\n2 - Em duas vezes;\n3 - De 3 ate 10 vezes com 3 por cento de juros ao mes;\n");
    scanf("%d", &x);
    switch (x) {
        case 1:
            precoAVista(gasto);
            break;
        case 2:
            precoDuasVezes(gasto);
            break;
        case 3:
            precoComJuros(gasto);
            break;
        default:
            return;
    }
}

int main() {
    double gasto;
    printf("Digite o total gasto pelo cliente.\n");
    scanf("%lf", &gasto);
    pagamento(gasto);
    return 0;
}

