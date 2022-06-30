#include <stdio.h>
#define LENGHT 25

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