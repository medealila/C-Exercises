#include<stdio.h>
#include<stdlib.h>

int main(){
    float p;
    float multiplicacao;

    printf("\n Digite o comprimento em polegadas: \t");
    scanf("%f", &p);

    multiplicacao = (p * 2.54);

    printf("\n Comprimento em centimetros: %f", multiplicacao);

    return 0;
}