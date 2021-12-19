#include<stdio.h>
#include<stdlib.h>

int main (){
    float r, pi;
    float multiplicacao;

    pi = 3.14;

    printf("\n Digite o angulo em radianos: \t");
    scanf("%f", &r);

    multiplicacao = (r * 180 / pi);

    printf("\n Graus: %f", multiplicacao);

    return 0;
}