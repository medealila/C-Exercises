#include<stdio.h>
#include<stdlib.h>

int main(){
    float k;
    float subtracao;

    printf("\n Digite a temperatura em Kelvin: \t");
    scanf("%f", &k);

    subtracao = (k - 273.15);

    printf("\n Celsius: %f", subtracao);

    return 0;
}