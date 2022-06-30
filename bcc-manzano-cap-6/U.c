#include <stdio.h>
#define LENGTH 12

/**
  Elaborar um programa que leia duas matrizes A e B de uma dimensão com 12 elementos. A
  matriz A deve aceitar apenas a entrada de valores divisíveis por 2 ou 3, enquanto a matriz B
  deve aceitar apenas a entrada de valores que não sejam múltiplos de 5. A entrada das matrizes deve ser validada pelo programa e não pelo usuário. Construir uma matriz C que seja o
  resultado da junção das matrizes A e B, de forma que contenha 24 elementos. Apresentar os
  elementos da matriz C.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[LENGTH * 2];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);

    while (!(A[i] % 2 == 0 || A[i] % 3 == 0))
    {
      printf("Apenas numeros divididos por 2 e 3 permitidos. Insira novamente: ");
      scanf("%d", &A[i]);
    }
    C[i] = A[i];
  }
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz B: ", i);
    scanf("%d", &B[i]);

    while (B[i] % 5 == 0)
    {
      printf("Apenas numeros nao multiplos de 5 permitido. Insira novamente: ");
      scanf("%d", &B[i]);
    }
    C[i + LENGTH] = B[i];
  }

  for (int i = 0; i < LENGTH * 2; i++)
  {
    printf("Valor %d da matriz C: %d\n", i, C[i]);
  }
}
