#include <stdio.h>

int main()
{
    int a, b, c, delta = 0;

    scanf("%d %d %d", &a, &b, &c);

    delta = (b * b) - (4 * a * c);

    printf("O delta dos numeros digitados e: %d\n", delta);

    return 0;
}
