#include<stdio.h>
#include<stdlib.h>

int main (){
    float real, dolar;

    printf("\n Digite o valor do real: \t");
    scanf("%f", &real);

    dolar = (real * 5.69);

    printf("\n Conversao em dolar: %f", dolar);

    return 0;
}