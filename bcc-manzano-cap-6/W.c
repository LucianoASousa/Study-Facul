#include <stdio.h>
#define LENGTH 10

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz B: \n", i);
    scanf("%d", &B[i]);
  }
  for (int i = 0; i < LENGTH; i++)
  {
    C[i] = (A[i] + B[i]) * (A[i] + B[i]);
    printf("Valor %d da matriz C: %d\n", i, C[i]);
  }
}
