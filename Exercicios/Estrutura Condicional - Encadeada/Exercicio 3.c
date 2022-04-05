/* 3) (URI – 1038) Com base na tabela abaixo, escreva um programa que leia o código de um item e a quantidade
deste item. A seguir, calcule e mostre o valor da conta a pagar.
Entrada: O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um
item conforme tabela acima.
Saída: O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas
após o ponto decimal.
Exemplo de Entrada Exemplo de Saída
3 2 Total: R$ 10.00
4 3 Total: R$ 6.00
2 3 Total: R$ 13.50 */

#include <stdio.h>
#include <math.h>

int cod, qnt;

int main()
{
    printf("Digite o codigo do item e a quantidade\n");
    scanf("%d %d", &cod, &qnt);

    if (cod == 1)
    {
        printf("Total: R$ %.2f\n", 4.00 * qnt);
    }
    else if (cod == 2)
    {
        printf("Total: R$ %.2f\n", 4.50 * qnt);
    }
    else if (cod == 3)
    {
        printf("Total: R$ %.2f\n", 5.00 * qnt);
    }
    else if (cod == 4)
    {
        printf("Total: R$ %.2f\n", 2.00 * qnt);
    }
    else if (cod == 5)
    {
        printf("Total: R$ %.2f\n", 1.50 * qnt);
    }
    else
    {
        printf("\nDigite um codigo valido\n");
    }
    system("Pause");
    return 0;
}
