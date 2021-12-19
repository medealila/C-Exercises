#include<stdio.h>
#include<stdlib.h>

int main(){
    float k;
    float divisao;

    printf("\n Digite o valor em quilogramas: \t");
    scanf("%f", &k);

    divisao = (k / 0.45);

    printf("\n Libras: %f", divisao);

    return 0;
}