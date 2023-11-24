#include <stdio.h>

int cont() {
    int n, i;

    printf("Digite um numero: \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d\n", i);
    }
}

int main() {
    cont();

    return 0;
}
