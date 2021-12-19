#include<stdio.h>
#include<stdlib.h>

int main(){
    int a;
    int grat;
    int imp;
    int sb;

    printf("\n Digite o salario base do funcionario: \t");
    scanf("%d", &a);

    grat = (a * 0.25);
    imp = (a * 0.07);
    sb = (a + grat - imp);

    printf("\n Salario a receber: %d", sb);

    return 0;
}