#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Insira um valor para A: ");
    scanf("%d", &a);
    printf("Insira um valor para B: ");
    scanf("%d", &b);
    printf("Insira um valor para C: ");
    scanf("%d", &c);

    if (a + b + c >= 100)
    {
        printf("Soma: %d", a + b + c);
    }
}