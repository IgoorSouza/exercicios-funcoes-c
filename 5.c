#include <stdio.h>

int main()
{
    int a, z, n, soma;

    printf("Digite a quantidade de numeros da P.A: \n");
    scanf("%d", &n);
    printf("Digite o primeiro numero da P.A: \n");
    scanf("%d", &a);
    printf("Digite o numero da posicao %d da P.A: \n", n);
    scanf("%d", &z);

    soma = (n * (a + z)) / 2;

    printf("A soma dos %d primeiros elementos da P.A e %d\n", n, soma);

    return 0;
}
