#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c;
    
    printf("\n Digite o valor 1: \t");
    scanf("%d", &a);

    printf("\n Digite o valor 2: \t");
    scanf("%d", &b);

    printf("\n Digite o valor 3: \t");
    scanf("%d", &c);

    int soma = a + b + c;
    printf("%d \n", soma);
    
    return 0;
}