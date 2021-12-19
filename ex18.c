#include<stdio.h>
#include<stdlib.h>

int main(){
    float m;
    float multiplicacao;

    printf("\n Digite o valor de volume em metros cubicos: \t");
    scanf("%f", &m);

    multiplicacao = (1000 * m);

    printf("\n Litros: %f", multiplicacao);

    return 0;
}