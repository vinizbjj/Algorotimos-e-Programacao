/* LISTA DE EXERCÍCIOS - Profª Talita Salles Coelho 
OPERAÇÕES ARITMÉTICAS
1) (URI-1015) Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano, 
p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais após a vírgula, segundo a 
fórmula:
Fórmula: Distância =
Entrada: O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores de ponto 
flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2. 
Saída: Calcule e imprima o valor da distância segundo a fórmula fornecida, com 4 casas após o ponto decimal.
Exemplo de Entrada Exemplo de Saída
1.0 7.0
5.0 9.0
4.4721
-2.5 0.4
12.1 7.3
16.1484
2.5 -0.4
-12.2 7.0
16.4575 */



#include <stdio.h>
#include <math.h>

int main()

{
    float x1, x2, y1, y2, dist;

    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.4lf\n", dist);

    return 0;
}
