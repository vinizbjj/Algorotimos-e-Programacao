/* 5) João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário 
de seu trabalho. Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca 
do estado de São Paulo (50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que 
você faça um programa que leia a variável peso (peso de peixes) e calcule o excesso. Gravar na 
variável excesso a quantidade de quilos além do limite e na variável multa o valor da multa que João deverá 
pagar. Imprima os dados do programa com as mensagens adequadas.
 */
#include <stdio.h>
#include <math.h>


float pfish, pmax, multa, pdif;

    int main(){

        printf("Joao, digite o total do peso de peixes\n");
        scanf("%f", &pfish);

        pmax = 50;



        if (pfish > pmax)
        {
            pdif = (pfish - pmax);
            multa = (pdif * 4.00);

            printf("\nJoao excedeu o limite de 50 quilos pescando %2.f, devera pagar multa de R$%.2f", pfish, multa);
        }else
        {
            printf("\nJoao pescou %.f quilos e nao excedeu o limite de 50 quilos portanto nao devera pagar multa.", pfish);
        }
        
        

   return 0;
}

