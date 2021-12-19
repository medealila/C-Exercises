#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    float raio, pi;
    float multi;

    printf("\n Digite o valor do raio do circulo: \t");
    scanf("%f", &raio);

    pi = 3.141592;
    multi = ((pi * (pow(raio,2));

    printf("\n Area do circulo: %f", multi);

    return 0;
}