#include<stdio.h>
#include<stdlib.h>

int main(){
    float j;
    float multiplicacao;

    printf("\n Digite o valor em jardas: \t");
    scanf("%f", &j);

    multiplicacao = (0.91 * j);

    printf("\n Metros: %f", multiplicacao);

    return 0;
}