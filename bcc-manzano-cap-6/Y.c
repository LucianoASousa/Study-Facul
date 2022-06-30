#include <stdio.h>
#define LENGTH 15

/**
  Escrever um programa que leia uma matriz A de uma dimensão com 15 elementos numéricos
  inteiros. Apresentar o total de elementos pares existentes na matriz.
 */

int main()
{
  int A[LENGTH];
  int pares = 0;

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 == 0)
    {
      pares++;
    }
  }
  printf("Quantidade de pares: %d\n", pares);
}
