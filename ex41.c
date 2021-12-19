#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c;
    int multi;
    int porc;
    int soma;

    printf("\n Digite o valor da hora trabalhada em reais: \t");
    scanf("%d", &a);

    printf("\n Digite o numero de horas trabalhadas: \t");
    scanf("%d", &b);

    multi = (a * b);
    c = multi;
    porc = (multi * 0.10);
    soma = (c + porc);

    printf("\n Valor a ser pago ao funcionario: %d", soma);

    return 0;
}