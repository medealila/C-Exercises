#include<stdio.h>
#include<stdlib.h>

int main(){
    float l;
    float multiplicacao;

    printf("\n Digite o valor em Libras: \t");
    scanf("%f", &l);

    multiplicacao = (l * 0.45);

    printf("\n Quilometros: %f", multiplicacao);

    return 0;
}