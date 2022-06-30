#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Insira o valor A: ");
    scanf("%d", &a);
    printf("Insira o valor B: ");
    scanf("%d", &b);
    printf("Insira o valor C: ");
    scanf("%d", &c);
    if (a > b)
    {
        if (b > c)
        {
            printf("%4d%4d%4d\n", c, b, a);
        }
        else
        {
            if (a > c)
            {
                printf("%4d%4d%4d\n", b, c, a);
            }
            else
            {
                printf("%4d%4d%4d\n", b, a, c);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (a > c)
            {
                printf("%4d%4d%4d\n", c, a, b);
            }
            else
            {
                printf("%4d%4d%4d\n", a, c, b);
            }
        }
        else
        {
            printf("%4d%4d%4d\n", a, b, c);
        }
    }
}