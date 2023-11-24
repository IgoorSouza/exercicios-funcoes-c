#include <stdio.h>

int compare() {
    int x, y;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &x, &y);

    if (x > y) {
       printf("%d e maior que %d\n", x, y);
    } else if (y > x) {
        printf("%d e maior que %d\n", y, x);
    } else {
        printf("Os dois numeros sao iguais\n");
    }
}

int main() {
    compare();

    return 0;
}
