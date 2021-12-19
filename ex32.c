#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int soma;

    scanf("%d", &a);
    soma = ((a * 3) + 1) + ((a * 2) - 1);
    printf("%d\n", soma);

    return 0;
}