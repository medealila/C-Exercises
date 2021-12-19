#include<stdio.h>
#include<stdlib.h>

int main(){
    int a,b,c,d;

    printf("\n Digite a quantidade de dias trabalhos pelo encanador: \t");
    scanf("%d", &b);

    a = (b * 30);
    d = (a * 0.08);
    c = (a - d);

    printf("\n Quantia liquida: %d", c);

    return 0;
}