#include <stdio.h>
#include <string.h>

int linearSearch(char string[], int tamanho, char chave)
{
  for (int i = 0; i < tamanho; i++)
  {
    if (chave == string[i])
      return i;
  }

  return -1;
}

int main()
{
  char string[] = "abcdefghijklmnopqrstuvwxyz";
  int chave = linearSearch(string, strlen(string), 'r');

  if (chave == -1)
  {
    printf("Chave não encontrada");
  }
  else
  {
    printf("Chave na posição %d, chave: %c", chave, string[chave]);
  }
  return 0;
}
