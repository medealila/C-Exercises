#include<stdio.h>
#include<stdlib.h>

int main(){
    float l;
    float divisao;

    printf("\n Digite o valor de volume em litros: \t");
    scanf("%f", &l);

    divisao = (l / 1000);

    printf("\n Metros cubicos: %f", divisao);

    return 0;
}