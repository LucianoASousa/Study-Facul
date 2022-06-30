#include <stdio.h>
#define LENGTH 3

int main()
{
  int A[LENGTH];
  int B[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %dª número: ", i + 1);
    scanf("%d", &A[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    B[i] = A[i] * 3;
    printf("O %dª número múltiplicado por 3 é: %d \n", i + 1, B[i]);
  }

  return 0;
}