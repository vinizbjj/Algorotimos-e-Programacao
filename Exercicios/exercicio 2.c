
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()

{

    setlocale(LC_ALL, "Portuguese" );


    float celsius, fahrenheit;

    printf("\n Digite o numero\n");
    scanf("%f", &fahrenheit);

    celsius =  ((fahrenheit -32) * 5 ) / 9; 

 

    printf("Fahrenheit in Celsius is:C%.2f \n\n", celsius);

    return 0;
}
