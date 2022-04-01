#include <stdio.h>
#include <math.h>
#include <string.h>

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

