#include <stdio.h>

#define LENGTH 3

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    int acc = 0;

    printf("Digite o %d° número da matriz A: ", i + 1);
    scanf("%d", &A[i]);

    for (int j = i; j > -1; j--)
    {
      acc += A[j];
    }

    B[i] = acc;
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", B[i]);
  }

  return 0;
}