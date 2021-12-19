#include<stdio.h>
#include<stdlib.h>

int main(){
    float mq;
    float multi;

    printf("\n Digite o valor em metros quadrados: \t");
    scanf("%f", &mq);

    multi = (mq * 0.0001);

    printf("\n Hectares: %f", multi);

    return 0;
}