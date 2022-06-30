#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, md;

    printf("Insira a nota N1: ");
    scanf("%d", &n1);
    printf("Insira a nota N2: ");
    scanf("%d", &n2);
    printf("Insira a nota N3: ");
    scanf("%d", &n3);
    printf("Insira a nota N4: ");
    scanf("%d", &n4);
    md = (n1 + n2 + n3 + n4) / 4;

    if (md >= 5)
    {
        printf("Aprovado!\n");
        printf("Sua média: %d\n", md);
    }
    else
    {
        printf("Reprovado!\n");
        printf("Sua média: %d\n", md);
    }
}