#include <stdio.h>
#include <math.h>

int n1, n2, sum;

int main()
{

    printf("Digite dois numeros\n");
    scanf("%d %d", &n1, &n2);

    if ((n1 + n2) > 10)
    {
       sum = (n1+n2) * 2;

       printf("O dobro da soma is %.2d\n", sum);
    }else{
       sum = (n1+n2) * 3;

       printf("O triplo da soma is %.2d\n", sum);
    }

    
    return 0;
}

