/* 5) Faça um programa para introduzir um número e verifique se o número é par ou ímpar.
 */
#include <stdio.h>
#include <math.h>

int main()
{

    int n1;

    printf("Digite um numero\n");
    scanf("%i", &n1);

    if (n1 % 2 == 0)
    {
        printf("O numero is par");
    }

    else
    {
        printf("O numero is impar");
    }
 

    return 0;
}
