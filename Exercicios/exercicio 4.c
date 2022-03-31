#include <locale.h>
#include <stdio.h>
#include <math.h>

int main()
{

    float n1, n2, n3, media;

    printf("Digite as 3 notas do aluno\n");
    
    scanf("%f %f %f", &n1, &n2, &n3);


    media = (n1*0.2 + n2*0.3 + n3*0.5) / 3;

    printf("media do aluno is %2.f", media);

    return 0;
}

