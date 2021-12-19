#include<stdio.h>
#include<stdlib.h>

int main(){
    float km;
    float divisao;

    printf("\n Digite o valor em quilometros: \t");
    scanf("%f", &km);

    divisao = (km / 1.61);

    printf("\n Milhas: %f", divisao);

    return 0;
}