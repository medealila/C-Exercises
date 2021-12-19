#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){
    float a, b;
    float sub;

    printf("\n Digite o valor de um produto: \t");
    scanf("%f", &a);

    b = a;
    a = (a * 0.12);
    sub = b - a;

    printf("\n Valor com desconto: %f", sub);

    return 0;
}