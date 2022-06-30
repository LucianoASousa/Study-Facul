#include <stdio.h>
#define LENGTH 15
#define BIG_LENGTH LENGTH * 2

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[BIG_LENGTH];
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
    C[current_index++] = A[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    C[current_index++] = B[i];
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    printf("%d\n", C[i]);
  }

  return 0;
}