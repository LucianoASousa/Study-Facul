#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, md1, ne, md2;
    printf("Insira a nota 1: ");
    scanf("%d", &n1);
    printf("Insira a nota 2: ");
    scanf("%d", &n2);
    printf("Insira a nota 3: ");
    scanf("%d", &n3);
    printf("Insira a nota 4: ");
    scanf("%d", &n4);

    md1 = (n1, n2, n3, n4) / 4;
    if (md1 >= 7)
    {
        printf("Aprovado\n");
    }
    else
    {
        printf("Insira a nota extra: ");
        scanf("%d", &ne);
        md2 = (md1 + ne) / 2;
        if (md2 >= 5)
        {
            printf("Aprovado em exame\n");
            printf("Sua média: %d", md2);
        }
        else
        {
            printf("Reprovado\n");
            printf("Sua média: %d", md2);
        }
    }
}