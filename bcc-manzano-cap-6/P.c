#include <stdio.h>
#define LENGHT 12

/**
  Elaborar um programa que leia 12 elementos inteiros para uma matriz A de uma dimensão do
  tipo vetor. Construir uma matriz B de mesmo tipo e dimensão, observando a seguinte lei de
  formação: "todo elemento da matriz A que for ímpar deve ser multiplicado por 2; caso contrário,
  o elemento da matriz A deve permanecer constante". Apresentar os elementos da matriz B.
 */

int main()
{
  int A[LENGHT];
  int B[LENGHT];
  for (int i = 0; i < LENGHT; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 != 0)
    {
      B[i] = A[i] * 2;
    }
    else
    {
      B[i] = A[i];
    }
  }

  for (int i = 0; i < LENGHT; i++)
  {
    printf("Valor %d da matriz B: %d\n", i, B[i]);
  }

  return 0;
}