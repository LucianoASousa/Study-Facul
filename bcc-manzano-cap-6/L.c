#include <stdio.h>
#define LENGTH 10

/**
  Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros. Construir
  uma matriz B de mesmo tipo, em que cada elemento deve ser a metade exata de cada um dos
  elementos existentes da matriz A. Apresentar os elementos das matrizes A e B.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    B[i] = A[i] / 2;
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Valor %d da matriz B: %d\n", i, B[i]);
  }
}