#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float divisao;

    printf("\n Digite o valor de comprimento em centimetros: \t");
    scanf("%f", &c);

    divisao = (c / 2.54);

    printf("\n Comprimento em polegadas: %f", divisao);

    return 0;
}