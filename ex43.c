#include<stdio.h>
#include<stdlib.h>

int main(){
    int valor;
    int a, b, c, d;

    printf("\n Digite um valor: \t");
    scanf("%d", &valor);

    a = (valor - (valor * 0.10));
    printf("\n Valor a pagar com desconto: %d", a);

    b = (valor / 3);
    printf("\n Valor de cada parcela, no parcelamento de x3 sem juros: %d", b);

    c = (a * 0.05);
    printf("\n Valor da comissao do vendedor com desconto: %d", c);

    d = (valor * 0.05);
    printf("\n Valor da comissao do vendedor sem desconto: %d", d);


    return 0;
}