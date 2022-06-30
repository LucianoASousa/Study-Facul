#include <stdio.h>

#define LENGTH 5
#define BIG_LENGTH LENGTH * 3

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[LENGTH];
  int D[BIG_LENGTH];
  int current_index = 0;

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz B: ", i + 1);
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz C: ", i + 1);
    scanf("%d", &C[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    D[current_index++] = A[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    D[current_index++] = B[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    D[current_index++] = C[i];
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    printf("%d\n", D[i]);
  }

  return 0;
}