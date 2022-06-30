#include <stdio.h>
#define LENGTH 3

/**
  Elaborar um programa que leia oito elementos inteiros em uma matriz A do tipo vetor. Construir
  uma matriz B de mesma dimensão com os elementos da matriz A multiplicados por 3.
  O elemento B[1] deve ser implicado pelo elemento A[1] * 3, o elemento B[2] implicado pelo
  elemento A[2] * 3 e assim por diante, até B. Apresentar a matriz B
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %dª número: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    B[i] = A[i] * 3;
    printf("O %dª número múltiplicado por 3 é: %d \n", i + 1, B[i]);
  }

  return 0;
}