#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    float a, b;
    float hip; 

    printf("\n Digite o valor do cateto 01: \t");
    scanf("%f", &a);

    printf("\n Digite o valor do cateto 02: \t");
    scanf("%f", &b);

    hip = (pow(a,2) + pow(b,2));
    hip = sqrt(hip);

    printf("\n Hipotenusa: %f", hip);

    return 0;
}