#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    printf("Insira o valor para A: ");
    scanf("%d", &a);
    printf("Insira o valor para B: ");
    scanf("%d", &b);
    printf("Insira o valor para C: ");
    scanf("%d", &c);
    printf("Insira o valor para D: ");
    scanf("%d", &d);
    printf("Insira o valor para E: ");
    scanf("%d", &e);

    if (a < b && a < c && a < d && a < e)
    {
        printf("menor valor: %d\n", a);
    }
    if (b < a && b < c && b < d && b < e)
    {
        printf("menor valor: %d\n", b);
    }
    if (c < a && c < b && c < d && c < e)
    {
        printf("menor valor: %d\n", c);
    }
    if (d < a && d < b && d < c && d < e)
    {
        printf("menor valor: %d\n", d);
    }
    if (e < a && e < b && e < c && e < d)
    {
        printf("menor valor: %d\n", e);
    }
    if (a > b && a > c && a > d && a > e)
    {
        printf("maior valor: %d\n", a);
    }
    if (b > a && b > c && b > d && b > e)
    {
        printf("maior valor: %d\n", b);
    }
    if (c > a && c > b && c > d && c > e)
    {
        printf("maior valor: %d\n", c);
    }
    if (d > a && d > b && d > c && d > e)
    {
        printf("maior valor: %d\n", d);
    }
    if (e > a && e > b && e > c && e > d)
    {
        printf("maior valor: %d\n", e);
    }
}