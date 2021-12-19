#include<stdio.h>
#include<stdlib.h>

int main(){
    float km;
    float divisao;

    printf("\n Digite o valor em quilometros por hora: \t");
    scanf("%f", &km);

    divisao = (km / 3.6);

    printf("\n Metros por segundo: %f", divisao);

    return 0;
}