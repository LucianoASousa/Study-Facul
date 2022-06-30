#include <stdio.h>

int main(void)
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Numero par.");
    }
    else
    {
        printf("Numero impar.");
    }
}