#include <stdio.h>

/* 5.9 Exercícios de Fixação  Letra --> (i)

Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o 
décimo quinto termo. A sequência de Fibonacci é formada por O, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 
89, 144, 233, 377, ... etc., obtendo-se o próximo termo a partir da soma do termo atual com o 
anterior sucessivamente até o infinito, se a sequência não for interrompida. Utilize para este 
exercício as variáveis ATUAL, ANTERIOR e PRÓXIMO.
*/

int Fibonacci()
{
    int ATUAL, ANTERIOR, PROXIMO;
    ATUAL = 1;
    ANTERIOR = 1;
    PROXIMO = ATUAL + ANTERIOR;

    printf("%d\n", ANTERIOR);
    printf("%d\n", ATUAL);
    printf("%d\n", PROXIMO);

    for (int i = 0; i < 12; i++)
    {
        ATUAL = ANTERIOR;
        ANTERIOR = PROXIMO;
        PROXIMO = ATUAL + ANTERIOR;
        printf("%d\n", PROXIMO);
    }
}

int main()
{
    Fibonacci();
    return 0;
};