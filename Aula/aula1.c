

#include <locale.h>
#include <stdio.h>

float a, b, n1, n2, total, total2;
int main()
{
    printf("Digite o valor que deseja a porcentagem de 6%% e depois 2.82%%\n");
    scanf("%f", &a);

    n1 = a + a * 0.06;
    printf("6%% de %.2f eh %.2f \n\n", a, n1);
    total = n1 + n1 * 0.0282;
    printf("Adicionado 2.82%% ao valor de %.2f totaliza %.2f\n\n", n1, total);

    printf("Digite o valor que deseja a porcentagem 8.99%%\n\n");
    scanf("%f", &n2);
    total2 = n2 + n2 * 0.0899;
    printf("Adicionado 8.99%% ao valor de %.2f totaliza %2.f\n\n", n2, total2);

    return 0;
}


