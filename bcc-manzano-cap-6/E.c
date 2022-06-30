#include <stdio.h>
#define LENGTH 15

int main()
{
  int fatorial[LENGTH];
  int vetor[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite um numero: ");
    scanf("%d", &vetor[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    for (fatorial[i] = 1; vetor[i] > 1; vetor[i]--)
    {
      fatorial[i] *= vetor[i];
    }

    printf("O fatorial de %d é: %d \n", vetor[i], fatorial[i]);
  }

  return 0;
}