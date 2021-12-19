#include<stdio.h>
#include<stdlib.h>

int main(){
    int degrau, objetivo;
    int div;

    printf("\n Digite a altura do degrau em centimetros: \t");
    scanf("%d", &degrau);

    printf("\n Digite a altura que deseja alcancar subindos as escadas em centimetros: \t");
    scanf("%d", &objetivo);

    div = (objetivo / degrau);

    printf("\n Quantos degraus o usuario devera subir: %d", div);

    return 0;
}