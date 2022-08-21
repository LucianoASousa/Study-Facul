#include <stdio.h>

/* 5.9 Exercícios de Fixação  Letra --> (n)

Elaborar um programa que leia sucessivamente valores numéricos e apresente no final 
o somatório, a média e o total de valores lidos. O programa deve ler os valores enquanto o 
usuário estiver fornecendo valores positivos. Ou seja, o programa deve parar quando o usuário 
fornecer um valor negativo (menor que zero).
*/

int Somatorio(){
    
    int valor, soma = 0;
    float media;
    int total = 1;

    printf("Digite um valor: ");
    scanf("%d", &valor);
    while (valor > 0)
    {
        soma += valor;
        printf("Digite um valor: ");
        scanf("%d", &valor);
        total++;
    }

    media = soma / total ;

    printf("Soma: %d\n", soma);
    printf("Média: %.2f\n", media);
    printf("Total de valores: %d\n", total);
}

int main()
{
    Somatorio();
    return 0;
}
    