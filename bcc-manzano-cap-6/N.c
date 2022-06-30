#include <stdio.h>
#define LENGTH 10

int main()
{
  int num;
  int A[LENGTH];

  printf("Insira o valor para ser calculado: ");
  scanf("%d", &num);

  for (int i = 0; i < LENGTH; i++)
  {
    A[i] = num * i;
  }

  printf("Resultado da matriz:\n");

  for (int i = 0; i < LENGTH; i++)
  {
    printf("%d * %d = %d\n", num, i, A[i]);
  }
}