#include<stdio.h>
#include<stdlib.h>

int main (){
    float milhas;
    float multiplicacao;

    printf("\n Digite o valor em milhas: \t");
    scanf("%f", &milhas);

    multiplicacao = (1.61 * milhas);

    printf("\n Quilometros: %f", multiplicacao);

    return 0;
}