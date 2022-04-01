/* 2) Calcule o desconto que uma loja dará a seus clientes. O desconto é dado da seguinte forma:
a) Compras até R$ 100 desconto de 5%
b) Compras acima de R$ 101 desconto de 10% */

#include <stdio.h>
#include <math.h>

float compras, desc;

int main()
{

    printf("Digite o valor da compra\n");
    scanf("%f", &compras);

    if (compras <= 100.00)
    {
      desc = compras * 5 / 100;

       printf("Desconto de 5%% vai ter um desconto de: %.2f\n", desc);

    }else{       
       desc = compras * 10 / 100;

       printf("Desconto de 10%% vai ter um desconto de de: %.2f\n", desc);
    }

    
    return 0;
}
