#include <stdio.h>

int pares() {
    int a, b, c, par = 0;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    if (a % 2 == 0) {
        par++;
    }
    if (b % 2 == 0) {
        par++;
    }
    if (c % 2 == 0) {
        par++;
    }
    if (par == 1) {
         printf("Entre os numeros digitados, %d e par\n", par);
    } else {
        printf("Entre os numeros digitados, %d sao pares\n", par);
    }
}


int main() {
    pares();

    return 0;
}
