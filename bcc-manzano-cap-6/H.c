#include <stdio.h>

#define LENGTH 20

/**
  Elaborar um programa que leia 20 elementos do tipo real em uma matriz A unidimensional e
  construir uma matriz B de mesma dimensão com os mesmos elementos armazenados na matriz
  A, porém de forma invertida. Ou seja, o primeiro elemento da matriz A passa a ser o último da
  matriz B, o segundo elemento da matriz A passa a ser o penúltimo da matriz B e assim por
  diante. Apresentar os elementos das matrizes A e B.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);

    B[LENGTH - i - 1] = A[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", B[i]);
  }

  return 0;
}