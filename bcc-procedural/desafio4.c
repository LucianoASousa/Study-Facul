#include <stdio.h>

/* 5.9 Exercícios de Fixação  Letra --> (k)

Escrever um programa que calcule e apresente o somatório do número de grãos de trigo que se 
pode obter num tabuleiro de xadrez, obedecendo à seguinte regra: colocar um grão de trigo no 
primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro 
quadro coloca-se um grão, no segundo quadro colocam-se dois grãos (neste momento, tem-se 
três grãos), no terceiro quadro colocam-se quatro grãos (tendo neste momento sete grãos), 
no quarto quadro colocam-se oito grãos (tendo-se então 15 grãos) até atingir o sexagésimo 
quarto quadro (este exercício foi baseado numa situação exposta no capítulo 16 do livro 
"O Homem que Calculava" de Malba Tahan, da Editora Record).
*/

long Grao()
{
    unsigned long long inicial = 1;
    unsigned long long total = 1;


    printf("%llu\n", inicial);

    for(int i = 0; i < 63 ; i++)
    {
        unsigned long long proximo = inicial * 2;
        printf("%llu\n", proximo);
        inicial = proximo;
        total += inicial;
    }
    printf("Total é: %llu", total);
}

int main(){

    Grao();
    return 0;
}    