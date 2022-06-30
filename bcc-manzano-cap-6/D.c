#include <stdio.h>
#define LENGTH 15

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    B[i] = A[i] * A[i];
    printf("O número %d ao quadrado é %d\n", A[i], B[i]);
  }

  return 0;
}