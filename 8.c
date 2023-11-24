#include <stdio.h>

double calcJuros(double c, int m, double t) {
    double juros = c * m * t/100;
    return(juros);
}

int main() {
    int m;
    double c, t;

    printf("Informe o valor do empréstimo: \n");
    scanf("%lf", &c);
    printf("Informe a quantidade de meses: \n");
    scanf("%d", &m);
    printf("Informe a porcentagem dos juros: \n");
    scanf("%lf", &t);

    double j = calcJuros(c, m, t);

    printf("Os juros deste emprestimo sao de R$%.2lf\n", j);

    return 0;
}
