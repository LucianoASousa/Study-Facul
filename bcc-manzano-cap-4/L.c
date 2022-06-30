#include <stdio.h>

int main(void)
{
    int num;
    printf("Insira um numero: ");
    scanf("%d", &num);
    if (!(num >= 3))
    {
        printf("%d", num);
    }
}