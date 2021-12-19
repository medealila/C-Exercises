#include<stdio.h>
#include<stdlib.h>

int main(){
    float f;
    float multiplicacao;

    printf("\n Digite a temperatura em Fahrenheit: \t");
    scanf("%f", &f);

    multiplicacao = (5 * (f - 32) / 9);

    printf("\n Celsius: %f", multiplicacao);

    return 0;
}