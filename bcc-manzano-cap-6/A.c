#include <stdio.h>
#define LENGTH 10

// Elaborar um programa que efetue a leitura de dez nomes de pessoas em uma matriz A do tipo vetor e apresente-os em seguida.

int main()
{
  char nomes[LENGTH][256];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o nome da %dª pessoa: ", i + 1);
    scanf("%s", nomes[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    printf("O nome da %d pessoa é: %s\n", i + 1, nomes[i]);
  }

  return 0;
}