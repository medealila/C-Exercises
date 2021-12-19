#include<stdio.h>
#include<stdlib.h>

int main(){
    float hec;
    float multi;

    printf("\n Digite o valor em Hectares: \t");
    scanf("%f", &hec);

    multi = (hec * 10000);

    printf("\n Metros quadrados: %f", multi);

    return 0;
}