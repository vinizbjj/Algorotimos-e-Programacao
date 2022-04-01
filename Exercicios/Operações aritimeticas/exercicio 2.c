/* 2) Faça um programa que transforme a temperatura de Fahrenheit para Celsius, utilizando a seguinte formula:
Celsius = ((Fahrenheit -32) * 5 ) / 9  */


#include <stdio.h>
#include <math.h>

int main()

{


    float celsius, fahrenheit;

    printf("\n Digite o numero\n");
    scanf("%f", &fahrenheit);

    celsius =  ((fahrenheit -32) * 5 ) / 9; 

 

    printf("Fahrenheit in Celsius is:C%.2f \n\n", celsius);

    return 0;
}
