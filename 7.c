#include <stdio.h>

int main()
{
    int x, soma, i, maior = -9999999, menor = 9999999;

    printf("Digite tres numeros: \n");

    for (i = 0; i < 3; i++) {
        scanf("%d", &x);
        if (x > maior) {
            maior = x;
        }
        if (x < menor) {
            menor = x;
        }
    }

    soma = menor + maior;

    printf("A soma do maior e do menor numero e %d", soma);

    return 0;
}

