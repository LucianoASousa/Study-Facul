#include <stdio.h>
#define LENGTH 30

int main()
{
  int A[LENGTH];
  int pares = 0;
  int impares = 0;

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: ", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 == 0)
    {
      pares += 1;
    }
    else
    {
      impares += 1;
    }
  }
  printf("Quantidade de pares: %d\n", pares);
  printf("Quantidade de impares: %d\n", impares);
}
