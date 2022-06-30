#include <stdio.h>
#define LENGTH 3

int main()
{
  int A[LENGTH];
  float impares = 0;
  float percent = 0;
  for (int i = 0; i < LENGTH; i++)
  {
    printf("Insira o valor %d da matriz A: \n", i);
    scanf("%d", &A[i]);
    if (A[i] % 2 != 0)
    {
      impares++;
    }
  }
  percent = (impares / LENGTH) * 100;
  printf("Quantidade de impares: %2.f\n", impares);
  printf("Porcentagem de impares: %2.f%%\n", percent);
}
