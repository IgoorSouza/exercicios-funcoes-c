#include <stdio.h>
#include <math.h>

int calcRaiz(int a, int b, int c) {
    int delta = (b * b) - (4 * a* c);

    if (delta == 0) {
        int r1 = (-b + sqrt(delta)) / 2 * a;
        printf("Essa equacao possui apenas uma raiz: %d\n", r1);
    } else if (delta > 0) {
        int r1 = (-b + sqrt(delta)) / 2 * a;
        int r2 = (-b - sqrt(delta)) / 2 * a;
        printf("Essa equacao possui duas raizes: %d %d\n", r1, r2);
    } else {
        printf("Nao existem raizes para essa equacao \n");
    }
}

int main() {
    int a, b, c;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    calcRaiz(a, b, c);

    return 0;
}
