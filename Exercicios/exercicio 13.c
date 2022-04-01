/* Ler dois números (considere que não serão lidos valores iguais) e escreva o maior deles */

#include <stdio.h>
#include <math.h>


int num1, num2;

int main()
{

    printf("\nDigite dois numeros diferentes\n");
    scanf("%d %d", &num1, &num2);

    if (num1 != num2)
    {
        if (num1 > num2)
        {

            printf("\n O maior numero %.d is:", num1);
        }
        else

            printf("\n O maior numero %.d is:", num2);
    }
    else
    {
        printf("\n Nao e permitido numeros iguais, favor digite numeros diferentes");
    }

    return 0;
}

