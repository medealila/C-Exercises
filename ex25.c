#include<stdio.h>
#include<stdlib.h>

int main(){
    float a;
    float multi;

    printf("\n Digite o valor em acres: \t");
    scanf("%f", &a);

    multi = (a * 4048.58);

    printf("\n Metros quadrados: %f", multi);

    return 0;
}