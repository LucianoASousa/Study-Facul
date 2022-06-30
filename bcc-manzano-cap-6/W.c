#include <stdio.h>
#define LENGTH 10

/**
  Elaborar um programa que leia duas matrizes A e B de uma dimensão do tipo vetor com dez
  elementos inteiros cada. Construir uma matriz C de mesmo tipo e dimensão que seja formada
  pelo quadrado da soma dos elementos correspondentes nas matrizes A e B. Apresentar os
  elementos da matriz C.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz B: \n", i);
    scanf("%d", &B[i]);
  }
  for (int i = 0; i < LENGTH; i++)
  {
    C[i] = (A[i] + B[i]) * (A[i] + B[i]);
    printf("Valor %d da matriz C: %d\n", i, C[i]);
  }
}
