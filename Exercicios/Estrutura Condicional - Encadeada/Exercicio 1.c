/* 1) (URI- 1050) Leia um número inteiro que representa um código de DDD para discagem interurbana. Em
seguida, informe à qual cidade o DDD pertence, considerando a tabela abaixo:
Se a entrada for qualquer outro DDD que não esteja presente na tabela acima, o programa deverá informar:
DDD não cadastrado
Entrada: A entrada consiste de um único valor inteiro.
Saída: Imprima o nome da cidade correspondente ao DDD existente na entrada. Imprima DDD nao cadastrado
caso não existir DDD correspondente ao número digitado.
Exemplo de Entrada Exemplo de Saída
11 Sao Paulo */

#include <stdio.h>

#define MAX_LENGTH 100

int n;
int ddd[8] = {61, 71, 11, 21, 32, 19, 27, 31};
char nome[8][MAX_LENGTH] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};

int main()
{

    printf("Digite o ddd que gostaria de saber o Estado, ex: 00\n");
    scanf("%d", &n);

    if (n == ddd[0])
    {
        printf("\n%s ", nome[0]);
    }
    else if (n == ddd[1])
    {
        printf("\n%s ", nome[1]);
    }
    else if (n == ddd[2])
    {
        printf("\n%s ", nome[2]);
    }
    else if (n == ddd[3])
    {
        printf("\n%s ", nome[3]);
    }
    else if (n == ddd[4])
    {
        printf("\n%s ", nome[4]);
    }
    else if (n == ddd[5])
    {
        printf("\n%s ", nome[5]);
    }
    else if (n == ddd[6])
    {
        printf("\n%s ", nome[6]);
    }
    else if (n == ddd[7])
    {
        printf("\n%s ", nome[7]);
    }
    else
    {
        printf("\nDDD Nao cadastrado\n");
    }

    system("Pause");
    return 0;

}
