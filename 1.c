#include <stdio.h>

int calcDelta() {
    int a, b, c, delta;

    printf("Digite tres numeros: \n");
    scanf("%d %d %d", &a, &b, &c);

    delta = (b * b) - (4 * a * c);
    printf("O delta dos numeros digitados e: %d\n", delta);
}

int main() {
    calcDelta();

    return 0;
}
