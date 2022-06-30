#include <stdio.h>

int main()
{
    int N;
    printf("Insira o valor de N: ");
    scanf("%d", &N);
    if (N < 0)
    {
        N = N * -1;
        printf("Valor de N: %i\n", N);
    }
    else
    {
        printf("Valor de N: %i\n", N);
    }
}