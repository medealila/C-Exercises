#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float alt, raio;
    float volume;
    float pi;

    printf("\n Digite a altura do cilindro: \t");
    scanf("%f", &alt);

    printf("\n Digite o raio do cilindro: \t");
    scanf("%f", &raio);

    pi = 3.141592;
    volume = (pi * (pow(raio,2) * alt));

    printf("\n Volume do circulo: %f", volume);

    return 0;
}