/* 6) Faça um programa para calcular o valor pago a um aplicativo de taxi. A taxa inicial da corrida é de 
R$ 4,90 mais R$ 3,00 o km rodado. Faça um programa para calcular o valor da corrida de uma pessoa. 
Mostre na tela o km rodado e o preço a ser pago pelo passageiro */


#include <stdio.h>
#include <math.h>


int main()
{

    float n1, km, total;

    printf("Digite quanto km foram rodados\n");
    scanf("%f", &km);


    n1 = 4.90;

    total = (n1 + (3.00 * km));

    printf("O cliente vai pagar %.2f\n", total);
    

    return 0;
}
