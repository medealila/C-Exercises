#include<stdio.h>
#include<stdlib.h>

int main(){
    char letraMin;
    int letraAscii;

    scanf("%c", &letraMin);

    letraAscii = (int) letraMin;
    letraAscii = letraAscii + 32;

    printf("\n%c", (char) letraAscii);

    return 0;
}
