#include <stdio.h>
#define LENGTH 15

/**
  Elaborar um programa que leia uma matriz A do tipo vetor com 15 elementos inteiros. Construir
  uma matriz B de mesmo tipo, e cada elemento da matriz B deve ser o resultado da fatorial
  correspondente de cada elemento da matriz A. Apresentar as matrizes A e B.
 */

int main()
{
  int fatorial[LENGTH];
  int vetor[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    for (fatorial[i] = 1; vetor[i] > 1; vetor[i]--)
    {
      fatorial[i] *= vetor[i];
    }

    printf("O fatorial de %d é: %d \n", vetor[i], fatorial[i]);
  }

  return 0;
}