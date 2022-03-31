#include <locale.h>
#include <stdio.h>
#include <math.h>
#include<conio.h>

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
