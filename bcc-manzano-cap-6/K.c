#include <stdio.h>
#define LENGTH 10

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    B[i] = A[i] * -1;
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Valor %d da matriz B: %d\n", i, B[i]);
  }
}