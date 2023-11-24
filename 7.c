#include <stdio.h>

int somar() {
    double maior = -9999999, menor = 9999999, x;

    printf("Digite tres numeros: \n");

    for (int i = 0; i < 3; i++) {
        scanf("%lf", &x);
        if (x > maior) {
            maior = x;
        }
        if (x < menor) {
            menor = x;
        }
    }
    double soma = maior + menor;
    printf("A soma do maior e do menor numero resulta em %.2lf", soma);
}

int main() {
    int soma = somar();

    return 0;
}
