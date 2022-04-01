/* ESTRUTURA CONDICIONAL - COMPOSTA:
1) Faça um programa para introduzir 2 números e fazer a soma destes 2 números. Se a soma for maior que 
10, calcular o dobro deste valor. Caso a soma destes 2 números for menor que 10, calcular o triplo desta 
soma. */

#include <stdio.h>
#include <math.h>

int n1, n2, sum;

int main()
{

    printf("Digite dois numeros\n");
    scanf("%d %d", &n1, &n2);

    if ((n1 + n2) > 10)
    {
       sum = (n1+n2) * 2;

       printf("O dobro da soma is %.2d\n", sum);
    }else{
       sum = (n1+n2) * 3;

       printf("O triplo da soma is %.2d\n", sum);
    }

    
    return 0;
}

