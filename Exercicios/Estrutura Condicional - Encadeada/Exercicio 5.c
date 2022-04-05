/* 5) Faça um programa que leia três valores e apresente os em ordem crescente */

#include <stdio.h>
#include <math.h>

int n1, n2, n3;

int main()
{
    printf("Digite 3 valores para serem colocados em ordem crescente\n");
    scanf("%d %d %d", &n1, &n2, &n3);

    if (n1 < n2 && n2 < n3)
    {
        printf("numeros %.2d %.2d %.2d ", n1, n2, n3);
    }
    else if (n1 < n3 && n3 < n2)
    {
        printf("numeros %.2d %.2d %.2d ", n1, n3, n2);
    }
    else if (n2 < n1 && n1 < n3)
    {
        printf("numeros %.2d %.2d %.2d ", n2, n1, n3);
    }
    else if (n2 < n3 && n3 < n1)
    {
        printf("numeros %.2d %.2d %.2d ", n2, n3, n1);
    }
    else if (n3 < n1 && n1 < n2)
    {
        printf("numeros %.2d %.2d %.2d ", n3, n1, n2);
    }
    else if (n3 < n2 && n2 < n1)
    {
        printf("numeros %.2d %.2d %.2d ", n1, n3, n2);
    }
    else if (n1 == n2 || n1 == n3 || n1 == n2 && n3 || n2 == n3)
    {
        printf("\nNumeros digitados nao podem ser iguais\n");
    }
    else
    {
        printf("\nAlgo deu errado, reveja o codigo\n");
    }

    system("Pause");

    return 0;
}