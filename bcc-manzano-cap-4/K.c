#include <stdio.h>

int main(void)
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 9)
    {
        printf("O valor está na faixa permitida");
    }
    else
    {
        printf("O valor está fora da faixa permitida");
    }
}