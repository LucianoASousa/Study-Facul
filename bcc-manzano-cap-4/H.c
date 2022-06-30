#include <stdio.h>

int main(void)
{
    int a, b, c, d;
    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Insira o valor C: ");
    scanf("%d", &c);
    printf("Insira o valor D: ");
    scanf("%d", &d);

    if (a % 2 == 0 || a % 3 == 0)
    {
        printf("%d é divisivel por 2 ou 3.\n", a);
    }
    if (b % 2 == 0 || b % 3 == 0)
    {
        printf("%d é divisivel por 2 ou 3.\n", b);
    }
    if (c % 2 == 0 || c % 3 == 0)
    {
        printf("%d é divisivel por 2 ou 3.\n", c);
    }
    if (d % 2 == 0 || d % 3 == 0)
    {
        printf("%d é divisivel por 2 ou 3.\n", d);
    }
}