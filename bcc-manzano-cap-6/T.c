#include <stdio.h>

#define LENGTH 10
#define BIG_LENGTH LENGTH * 2

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[BIG_LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);

    while (!(A[i] % 2 == 0 && A[i] % 3 == 0))
    {
      printf("Apenas numeros divididos por 2 e 3 permitidos. Insira novamente: ");
      scanf("%d", &A[i]);
    }
    C[i] = A[i];
  }
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz B: ", i);
    scanf("%d", &B[i]);

    while (B[i] % 5 != 0)
    {
      printf("Apenas numeros multiplos de 5 permitido. Insira novamente: ");
      scanf("%d", &B[i]);
    }
    C[i + LENGTH] = B[i];
  }

  for (int i = 0; i < BIG_LENGTH; i++)
  {
    printf("Valor %d da matriz C: %d\n", i, C[i]);
  }
}
