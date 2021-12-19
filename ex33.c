#include<stdio.h>
#include<stdlib.h>

int main(){
    float l;
    float multi;

    printf("\n Digite o valor da lado do quadrado: \t");
    scanf("%f", &l);

    multi = (l * l);

    printf("\n Area: %f", multi);

    return 0;
}