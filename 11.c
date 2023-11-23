#include <stdio.h>
#include <math.h>

int main()
{
    int a, i, cont = 0;

    printf("Digite um numero positivo: \n");
    scanf("%d", &a);
    int divisores[a];

    for (i = 1; i <= a; i++) {
        if (a % i == 0) {
            divisores[cont] = i;
            cont++;
        }
    }

    printf("Os divisores deste numero sao: ");
    for (i = 0; i < cont; i++) {
        if (i == cont - 1) {
            printf("%d\n", divisores[i]);
        } else {
            printf("%d, ", divisores[i]);
        }
    }

    return 0;
}
