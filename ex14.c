#include<stdio.h>
#include<stdlib.h>

int main(){
    float g;
    float pi;
    float multiplicacao;

    pi = 3.14;

    printf("\n Digite o angulo em graus: \t");
    scanf("%f", &g);

    multiplicacao = (g * pi / 180);

    printf("\n Radianos: %f", multiplicacao);

    return 0;
}