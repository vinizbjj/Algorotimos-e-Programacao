#include <stdio.h>
#include <ctype.h>

char letra;

int main()
{
    printf("digite uma letra\n");
    scanf(" %c", &letra);
    letra = tolower(letra);

    if (isalpha(letra))
    {
        switch (letra)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\n A letra '%c' e uma vogal\n", letra);
            break;
        default:
        printf("\n A letra '%c' e uma consoante\n", letra);
        }
    }
    else
        printf("\n nao e uma letra\n");
    return 0;
}