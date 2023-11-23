#include <stdio.h>

int main()
{
    int n, i;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
