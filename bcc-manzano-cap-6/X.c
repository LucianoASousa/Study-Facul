#include <stdio.h>
#define LENGTH 3

/**
  Elaborar um programa que leia uma matriz A de uma dimensão com seis elementos do tipo real.
  Construir uma matriz B, em que cada posição de índice ímpar da matriz B deve ser atribuída
  com um elemento de índice par existente na matriz A e cada posição de índice par da matriz B
  deve ser atribuída com um elemento de índice ímpar existente na matriz A. Apresentar os
  elementos das duas matrizes
 */

int main()
{
  float A[LENGTH];
  float B[LENGTH];
  float C[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%f", &A[i]);
    if (i % 2 != 0)
    {
      B[i] = A[i + 1];
    }
    if (i % 2 == 0)
    {
      B[i] = A[i + 1];
    }
  }
  printf("\n\n");
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Valor %d da matriz A: %.2f\n", i, A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Valor %d da matriz B: %.2f\n", i, B[i]);
  }
}
