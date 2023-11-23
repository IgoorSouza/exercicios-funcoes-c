#include <stdio.h>

int main()
{
    int c, m, t, j;

    printf("Informe o valor do empréstimo: \n");
    scanf("%d", &c);
    printf("Informe a quantidade de meses: \n");
    scanf("%d", &m);
    printf("Informe a porcentagem dos juros: \n");
    scanf("%d", &t);

    j = c * m * t/100;

    printf("Os juros deste emprestimo sao de %d reais\n", j);

    return 0;
}
