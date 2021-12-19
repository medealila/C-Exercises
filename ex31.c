#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int soma;
    int sub;

    printf("\n Digite um numero: \t");
    scanf("%d", &a);

    soma = (a + 1);
    sub = (a - 1);

    printf("%d\n", soma);
    printf("%d\n", sub);

    return 0;
}