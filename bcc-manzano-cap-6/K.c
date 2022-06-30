#include <stdio.h>
#define LENGTH 10

/**
  Elaborar um programa que leia uma matriz A do tipo vetor com dez elementos inteiros positivos.
  Construir uma matriz B de mesmo tipo e dimensão, em que cada elemento da matriz B deve ser
  o valor negativo do elemento correspondente da matriz A. Desta forma, se em A[1] estiver
  armazenado o elemento 8, deve estar em 8[1] o valor -8 e assim por diante. Apresentar os
  elementos da matriz B.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    B[i] = A[i] * -1;
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Valor %d da matriz B: %d\n", i, B[i]);
  }
}