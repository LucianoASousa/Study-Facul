#include <stdio.h>
#define LENGHT 6
#define BIG_LENGTH LENGHT * 2

int main()
{
  int A[LENGHT];
  int B[LENGHT];
  int C[BIG_LENGTH];
  int D[BIG_LENGTH];
  for (int i = 0; i < LENGHT; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 != 0)
    {
      C[i] = A[i];
    }
    else
    {
      D[i] = A[i];
    }
  }
  for (int i = 0; i < LENGHT; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &B[i]);
    if (B[i] % 2 != 0)
    {
      C[i] = B[i];
    }
    else
    {
      D[i] = B[i];
    }
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    if (C[i] != 0)
    {
      printf("Valor %d da matriz C: %d\n", i, C[i]);
      /* code */
    }
  }
  for (int i = 0; i < BIG_LENGTH; i++)
  {
    if (D[i] != 0)
    {
      printf("Valor %d da matriz C: %d\n", i, C[i]);
      /* code */
    }
  }

  return 0;
}