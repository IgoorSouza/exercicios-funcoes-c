#include <stdio.h>

int somaPares(int a, int b) {
    int soma = 0;
    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
    return(soma);
}

int main() {
    int a, b;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    int soma = somaPares(a, b);

    printf("A soma dos numeros pares encontrados entre %d e %d resulta em %d\n", a, b, soma);

    return 0;
}

