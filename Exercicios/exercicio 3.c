
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{

    int tgasto, kmh;
    float litros;

    printf("\nDigite o tempo gasto e a velocidade media que estava\n");
    scanf("%d %d", &tgasto, &kmh);

    litros = tgasto * kmh / 12.0;

    printf("litros utilizados foi %.3f\n", litros);

    return 0;
}
