#include <stdio.h>
#define LENGHT 25

/**
  Escrever um programa que leia 25 elementos (valores reais) para temperaturas em graus
  Celsius e armazene esses valores em uma matriz A de uma dimensão do tipo vetor. Construir
  uma matriz B de mesmo tipo e dimensão, em que cada elemento da matriz B deve ser a
  conversão da temperatura em graus Fahrenheit do elemento correspondente da matriz A.
  Apresentar os elementos das matrizes A e B.
 */

int main()
{
  float A[LENGHT];
  float B[LENGHT];
  for (int i = 0; i < LENGHT; i++)
  {
    printf("Insira o valor %d da matriz A: ", i + 1);
    scanf("%f", &A[i]);
    B[i] = A[i] * 1.8 + 32;
  }

  for (int i = 0; i < LENGHT; i++)
  {
    printf("Valor %d da matriz A: %.2f\n", i + 1, A[i]);
  }

  for (int i = 0; i < LENGHT; i++)
  {
    printf("Valor %d da matriz B: %.2f\n", i + 1, B[i]);
  }

  return 0;
}