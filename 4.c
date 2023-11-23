#include <stdio.h>

int main()
{
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

    printf("quantidade de numeros pares: %d\n", par);

    return 0;
}
