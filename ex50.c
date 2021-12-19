#include<stdio.h>
#include<stdlib.h>

int main(){
    int idade, atual;
    int nasc;

    printf("\n Digite sua idade: \t");
    scanf("%d", &idade);

    printf("\n Ano: \t");
    scanf("%d", &atual);

    nasc = (atual - idade);

    printf("\n Ano de nascimento: %d", nasc);

    return 0;
}