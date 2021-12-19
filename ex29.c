#include<stdio.h>
#include<stdlib.h>

int main (){
    float n1, n2, n3, n4;
    float soma;

    printf("\n Digite o valor da N1: \t");
    scanf("%f", &n1);

    printf("\n Digite o valor da N2: \t");
    scanf("%f", &n2);

    printf("\n Digite o valor da N3: \t");
    scanf("%f", &n3);

    printf("\n Digite o valor da N4: \t");
    scanf("%f", &n4);

    soma = ((n1 + n2 + n3 + n4) / 4);

    printf("\n Resultado: %f", soma);

    return 0;
}