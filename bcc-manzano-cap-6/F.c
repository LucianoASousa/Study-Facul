#include <stdio.h>
#define LENGTH 15
#define BIG_LENGTH LENGTH * 2

/**
  Construir um programa que leia duas matrizes A e B do tipo vetor com 15 elementos quaisquer
  inteiros. Construir uma matriz C, sendo esta o resultado da junção das matrizes A e B. Desta
  forma, a matriz C deve ter o dobro de elementos em relação às matrizes A e B, ou seja, a matriz
  C deve possuir 30 elementos. Apresentar a matriz C.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[BIG_LENGTH];
  int current_index = 0;

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz B: ", i + 1);
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    C[current_index++] = A[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    C[current_index++] = B[i];
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    printf("%d\n", C[i]);
  }

  return 0;
}