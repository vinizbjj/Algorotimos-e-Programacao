/* 3) Faça um programa que receba o nome, a altura e o gênero (M ou F) de uma pessoa, calcule e mostre seu 
peso ideal, utilizando as seguintes fórmulas:
- para sexo masculino: peso ideal = (72.7 *altura) - 58
- para sexo feminino: peso ideal = (62.1 *altura) – 44.7
 */
#include <stdio.h>
#include <math.h>
#include <string.h>

char nome[40], genero;
float altura, masc, fem;

int main()
{

   printf("Digite seu nome, genero m ou f e altura\n");
   scanf("%[^\n]  %c %f", &nome, &genero, &altura);

   masc = (72.7 * altura) - 58;
   fem = (62.1 * altura) - 44.7;

   if (genero=='M')
   {
      printf("\n%s Seu peso ideal para sua altura de %.2f is:%.2f\n", nome, altura, masc);
   }
   else if(genero=='F')
   {
      printf("\n%s Seu peso ideal para sua altura de %.2f is:%.2f\n", nome, altura, fem);
   }else
      printf("\n Voce digitou seu genero incorretamente");
   return 0;
}
