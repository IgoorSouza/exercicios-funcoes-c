#include <stdio.h>

int quad() {
    double b, h;

    printf("Digite as medidas do quadrilatero: \n");
    scanf("%lf %lf", &b, &h);

    if (b == h) {
        printf("1\n");
    } else {
        printf("0\n");
    }
}

int main() {
    quad();

    return 0;
}
