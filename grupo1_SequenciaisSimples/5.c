#include <stdio.h>
#include <math.h>

void CalculaLista5(double x, double y){
    printf("Soma = %.0f\n", x+y);
    printf("Soma do primeiro pelo quadrado do segundo = %.0f\n", (x+pow(y,2)));
    printf("Quadrado do primeiro = %.0f\n", pow(x,2));
    printf("Raiz quadrada da soma dos quadrados = %.0f\n", sqrt( pow(x,2)+pow(y,2) ));
    printf("Seno da diferenca do primeiro pelo segundo = %.0f\n", sin( x-y ));
    printf("Modulo do primeiro = %.0f\n", x>0?x:-x);

}

int main (){
    double x, y;
    printf("Digite os dois numeros.\n - ");
    scanf("%lf %lf", &x, &y);
    CalculaLista5(x,y);
    return 0;
}