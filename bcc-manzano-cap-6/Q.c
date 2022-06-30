#include <stdio.h>
#define LENGHT 15

int main()
{
  int A[LENGHT];
  int B[LENGHT];
  for (int i = 0; i < LENGHT; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 == 0)
    {
      B[i] = A[i] / 2;
    }
    else
    {
      B[i] = A[i] * 1.5;
    }
  }

  for (int i = 0; i < LENGHT; i++)
  {
    printf("Valor %d da matriz B: %d\n", i, B[i]);
  }

  return 0;
}