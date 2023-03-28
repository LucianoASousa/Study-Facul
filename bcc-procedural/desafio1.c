#include <stdio.h>

/* 5.9 Exercícios de Fixação  Letra --> (i)

Escrever um programa que apresente os valores da sequência numérica de Fibonacci até o 
décimo quinto termo. A sequência de Fibonacci é formada por O, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 
89, 144, 233, 377, ... etc., obtendo-se o próximo termo a partir da soma do termo atual com o 
anterior sucessivamente até o infinito, se a sequência não for interrompida. Utilize para este 
exercício as variáveis ATUAL, ANTERIOR e PRÓXIMO.
*/

int Fibonacci(int termo)
{
    int ATUAL, ANTERIOR, PROXIMO;
    ATUAL = 1;
    ANTERIOR = 0;
    PROXIMO = ATUAL + ANTERIOR;
    for (int i = 0; i < termo; i++)
    {
        ATUAL = ANTERIOR;
        ANTERIOR = PROXIMO;
        printf("%d\n", ATUAL);
        PROXIMO = ATUAL + ANTERIOR;
        
    }
}

int main()
{   int a;
    scanf("%d",&a);
    Fibonacci(a);
    return 0;
};