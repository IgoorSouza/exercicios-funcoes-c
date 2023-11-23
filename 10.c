#include <stdio.h>

int main()
{
    int a, b, soma = 0;

    printf("Digite dois numeros: \n");
    scanf("%d %d", &a, &b);

    for (int i = a + 1; i < b; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }

    printf("A soma dos numeros pares encontrados entre estes dois numeros e %d\n", soma);

    return 0;
}
