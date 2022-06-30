#include <stdio.h>
#define LENGTH 3

/**
  Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos numéricos
  inteiros. Apresentar o total de elementos ímpares existentes na matriz e também o percentual
  do valor total de números ímpares em relação à quantidade total de elementos armazenados na
  matriz.
 */

int main()
{
  int A[LENGTH];
  float impares = 0;
  float percent = 0;
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 != 0)
    {
      impares++;
    }
  }
  percent = (impares / LENGTH) * 100;
  printf("Quantidade de impares: %2.f\n", impares);
  printf("Porcentagem de impares: %2.f%%\n", percent);
}
