#include <stdio.h>

#define LENGTH 3

/**
  Elaborar um programa que leia uma matriz A do tipo vetor com 20 elementos inteiros. Construir
  uma matriz B do mesmo tipo e dimensão da matriz A, sendo cada elemento da matriz B o
  somatório de 1 até o valor do elemento correspondente armazenado na matriz A. Se o valor do
  elemento da matriz A[1] for 5, o elemento correspondente da matriz B[1] deve ser 15, pois o
  somatório do elemento da matriz A é 1+2+3+4+5. Apresentar os elementos da matriz B
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    int acc = 0;

    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);

    for (int j = i; j > -1; j--)
    {
      acc += A[j];
    }

    B[i] = acc;
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", B[i]);
  }

  return 0;
}