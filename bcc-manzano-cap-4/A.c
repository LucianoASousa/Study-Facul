#include <stdio.h>

int main()
{
    int a, b, menor, maior, res;
    printf("Insira o valor A: ");
    scanf("%i", &a);
    printf("Insira o valor B: ");
    scanf("%i", &b);

    if (a > b)
    {
        menor = b;
        maior = a;
    }
    else
    {
        menor = a;
        maior = b;
    }

    res = maior - menor;
    printf("Menor: %i\n", menor);
    printf("Maior: %i\n", maior);
    printf("Diferença do maior pelo menor: %i\n", res);
}