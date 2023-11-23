#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, r1 = 0, r2 = 0, delta = 0;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b * b) - (4 * a* c);

    if (delta < 0) {
        printf("Nao existem raizes para essa equacao \n");
    } else if (delta == 0) {
        r1 = (-b + sqrt(delta)) / 2 * a;
        printf("Essa equacao possui apenas uma raiz: %d\n", r1);
    } else {
        r1 = (-b + sqrt(delta)) / 2 * a;
        r2 = (-b - sqrt(delta)) / 2 * a;
        printf("Essa equacao possui duas raizes: %d %d\n", r1, r2);
    }

    return 0;
}
