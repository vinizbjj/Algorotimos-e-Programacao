#include <stdio.h>
#include <math.h>

int n1, n2, produto, sum;
float r1, pow3;

int main()
{

    printf("Digite 2 numeros inteiros e um real\n");
    scanf("%d %d %f", &n1, &n2, &r1);

    produto = n1 * 2 * (n2 / 2);
    sum = r1 * (n1 * 3) ;
    pow3 = (pow(r1, 3));

    printf("O dobro do primeiro com metade do segundo %.d\n", produto);
    
    printf("a soma do triplo do primeiro com o terceiro %.d\n", sum);

    printf("O terceiro elevado ao cubo %.2f\n", pow3);


    return 0;
}
