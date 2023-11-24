#include <stdio.h>

int acharDivisores(int a) {
    int divisores[a], cont = 0;

    for (int i = 1; i <= a; i++) {
        if (a % i == 0) {
            divisores[cont] = i;
            cont++;
        }
    }

    printf("Os divisores deste numero sao: ");

    for (int i = 0; i < cont; i++) {
        if (i == cont - 1) {
            printf("%d.\n", divisores[i]);
        } else if (i == cont - 2) {
            printf("%d e ", divisores[i]);
        } else {
            printf("%d, ", divisores[i]);
        }
    }
}

int main() {
    int a;

    printf("Digite um numero positivo: \n");
    scanf("%d", &a);

    acharDivisores(a);

    return 0;
}
