#include<stdio.h>
#include<stdlib.h>

int main(){
    float c;
    float multiplicacao;

    printf("\n Digite a temperatura em Celsius: \t");
    scanf("%f", &c);

    multiplicacao = (c * (9/5) + 32);

    printf("\n Fahrenheit: %f", multiplicacao);

    return 0;
}