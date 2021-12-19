#include<stdio.h>
#include<stdlib.h>

int main(){
    float m;
    float multiplicacao;

    printf("\n Digite o valor em metros cubicos: \t");
    scanf("%f", &m);

    multiplicacao = (m * 0.000247);

    printf("\n Acres: %f\t", multiplicacao);

    return 0;
}