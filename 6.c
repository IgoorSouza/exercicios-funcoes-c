#include <stdio.h>

int main()
{
    int b, h;

    printf("Digite as medidas do quadrilatero: \n");
    scanf("%d %d", &b, &h);

    if (b == h) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
