#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;
    int soma;
    
    printf("\n Digite o valor 01: \t");
    scanf("%d", &a);

    printf("\n Digite o valor 02: \t");
    scanf("%d", &b);
    
    printf("\n Digite o valor 03: \t");
    scanf("%d", &c);

    soma = ((a + b + c) * 2);

    printf("\n Resultado: %d", soma);

    return 0;
}