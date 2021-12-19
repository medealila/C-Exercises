#include<stdio.h>
#include<stdlib.h>

int main(){
    float m;
    float divisao;

    printf("\n Digite o valor de comprimento em metros: \t");
    scanf("%f", &m);

    divisao = (m / 0.91);

    printf("\n Jardas: %f", divisao);
    
    return 0;
}