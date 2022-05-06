#include <stdio.h>
#include <math.h>

int ptotal, pnovo;
float macarrao, calabresa, molhot, extratot, salsicha;

int main()
{

    printf("Digite a quantidade atual de pessoal e a quantidade que será feita a conta\n");
    scanf("%d %d", &ptotal, &pnovo);


    printf("\n Digite a quantidade de macarrao para o total atual de pessoas\n");
    scanf("%f", &macarrao);

    printf("\n Digite a quantidade de calabresa para o total atual de pessoas\n");
    scanf("%f", &calabresa);

    printf("\n Digite a quantidade de molho de tomate para o total atual de pessoas\n");
    scanf("%f", &molhot);

    printf("\n Digite a quantidade de extrato de tomate para o total atual de pessoas\n");
    scanf("%f", &extratot);

    printf("\n Digite a quantidade de salsicha para o total atual de pessoas\n");
    scanf("%f", &salsicha);

    macarrao = (macarrao / ptotal*pnovo);
    calabresa = (calabresa/ ptotal*pnovo);
    molhot = ( molhot /ptotal*pnovo);
    extratot = (extratot/ ptotal*pnovo);
    salsicha = (salsicha/ ptotal*pnovo);

    printf("macarrao para %d pessoas %.2f\n", pnovo, macarrao);
    printf("calabresa para %d pessoas %.2f\n", pnovo, calabresa);
    printf("molho de tomate para %d pessoas %.2f\n", pnovo, molhot);
    printf("extrato de tomate para %d pessoas %.2f\n", pnovo, extratot);
    printf("salsicha para %d pessoas %.2f\n", pnovo, salsicha);


        system("Pause");

    return 0;
}



