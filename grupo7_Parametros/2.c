#include <stdio.h>

float razao(float n1, float n2, float *res) {
    float div;

    if(n2 != 0) {
        *res = n1 / n2;
        return 1;
    }else {
        return 0;
    }
}


int main() {
    float n1, n2,res, resultado = 0;
    scanf("%f %f", &n1, &n2);

    res = razao(n1, n2, &resultado);
    printf("%.0f\n", res);
    printf("%.2f",resultado);

    return 0;
}
