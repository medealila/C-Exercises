#include<stdio.h>
#include<stdlib.h>

int main(){
    int a, b, c, d;

    a = 780000;
    printf("%d\n", a);

        b = (a * 0.46);
        printf("%d\n", b);

        c = (a * 0.32);
        printf("%d\n", c);

        d = (a - b - c);
        printf("%d\n", d);

    return 0;
}