#include<stdio.h>
#include<stdlib.h>

int main(){
    float seg, hor, min;

    printf("\n Segundos: \t");
    scanf("%f", &seg);

    hor = (seg / 3600);
    min = (seg / 60);

    printf("\n Horas: %f", hor);
    printf("\n Minutos: %f", min);
    printf("\n Segundos: %f", seg);


    return 0;
}