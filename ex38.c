#include<stdio.h>
#include<stdlib.h>

int main(){
    float a, b;
    float soma;

    printf("\n Digite o salario do funcionario: \t");
    scanf("%f", &a);

    b = a;
    a = (a * 0.25);
    soma = (b + a);

    printf("\n Novo salario com aumento: %f", soma);

    return 0;
}