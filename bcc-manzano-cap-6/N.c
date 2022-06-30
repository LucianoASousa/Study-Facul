#include <stdio.h>
#define LENGTH 10

/**
  Elaborar um programa que leia 20 elementos (valores reais) para temperaturas em graus
  Celsius e armazene esses valores em uma matriz A de uma dimensão. O programa ao final
  deve apresentar a menor, a maior e a média das temperaturas lidas.
 */

int main()
{
  int num;
  int A[LENGTH];

  printf("Insira o valor para ser calculado: ");
  scanf("%d", &num);

  for (int i = 0; i < LENGTH; i++)
  {
    A[i] = num * i;
  }

  printf("Resultado da matriz:\n");

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d * %d = %d\n", num, i, A[i]);
  }
}