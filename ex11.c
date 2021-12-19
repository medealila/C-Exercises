#include<stdio.h>
#include<stdlib.h>

int main (){
    float m;
    float multiplicacao;

    printf("\n Digite o valor em metros por segundo: \t");
    scanf("%f", &m);

    multiplicacao = (m * 3.6);

    printf("\n Quilometros por hora: %f", multiplicacao);

    return 0;
}