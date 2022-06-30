#include <stdio.h>

int main(void)
{
    int num;
    printf("Insira numero: ");
    scanf("%d", &num);
    num = num * 2;
    if (num >= 30)
    {
        printf("dobro: %d", num);
    }
}