/* 4) Uma fruteira está vendendo frutas com a seguinte tabela de preços:
 Até 5 Kg Acima de 5 Kg
Morango R$ 2,50 por Kg R$ 2,20 por Kg
Maçã R$ 1,80 por Kg R$ 1,50 por Kg
Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda
um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a
quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente. */

#include <stdio.h>
#include <math.h>

float morango, maca, kg, value, desc;

int main()
{
    printf("Digite o quantos morangos e quantas maca comprou\n");
    scanf("%f %f", &morango, &maca);

    kg = morango + maca;

    if (kg <= 5)
    {
        printf("Menos de 5kg vai ser pago R$%.2f no Morango e R$%.2f na Maca", 2.50 * morango, 1.80 * maca);
    }
    else if (kg > 5 && kg <= 8)
    {
        printf("Mais de 5kg e menos de 8kg vai ser pago R$%.2f no Morango e R$%.2f na Maca", 2.20 * morango, 1.50 * maca);
    }
    else if (kg > 8 || value > 25.00)
    {
        printf("Vai ser pago R$%.2f no Morango e R$%.2f na Maca com desconto de 10%%", (2.20 * morango), (1.50 * maca));
        desc = (morango + maca) * 0.90;
        printf(" total a ser pago R$ %2.f", desc);
    }
    else
    {

        printf("Algo foi preenchido incorretamente");
    }

    return 0;
}