#include<stdio.h>
#include<stdlib.h>

int main (){
    float c;
    float soma;

    printf("\n Digite a temperatura em Celsius: \t");
    scanf("%f", &c);

    soma = (c + 273.15);

    printf("\n Kelvin: %f", soma);

    return 0;
}