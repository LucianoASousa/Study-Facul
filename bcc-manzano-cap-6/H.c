#include <stdio.h>

#define LENGTH 20

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);

    B[LENGTH - i - 1] = A[i];
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", B[i]);
  }

  return 0;
}