#include <stdio.h>

#define LENGTH_1 20
#define LENGTH_2 30
#define BIG_LENGTH LENGTH_1 + LENGTH_2

/**
  Elaborar um programa que leia duas matrizes do tipo vetor para o armazenamento de nomes de
  pessoas, sendo a matriz A com 20 elementos e a matriz B com 30 elementos. Construir uma
  matriz C, sendo esta a junção das matrizes A e B. Desta forma, a matriz C deve ter a
  capacidade de armazenar 50 elementos. Apresentar os elementos da matriz C.
 */

int main()
{
  int A[LENGTH_1];
  int B[LENGTH_2];
  int C[BIG_LENGTH];
  int current_index = 0;

  for (int i = 0; i < LENGTH_1; i++)
  {
    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH_2; i++)
  {
    printf("Digite o %d° número da matriz B: ", i + 1);
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < LENGTH_1; i++)
  {
    C[current_index++] = A[i];
  }

  for (int i = 0; i < LENGTH_2; i++)
  {
    C[current_index++] = B[i];
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    printf("%d\n", C[i]);
  }

  return 0;
}