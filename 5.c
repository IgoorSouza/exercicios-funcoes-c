#include <stdio.h>

int somar() {
    int n;
    double a, z, soma;

    printf("Digite a quantidade de numeros da P.A: \n");
    scanf("%d", &n);

    printf("Digite o primeiro numero da P.A: \n");
    scanf("%lf", &a);

    printf("Digite o numero da posicao %d da P.A: \n", n);
    scanf("%lf", &z);

    soma = (n * (a + z)) / 2;
    printf("A soma dos %d primeiros elementos da P.A resulta em %.2lf\n", n, soma);
}

int main() {
    somar();

    return 0;
}
