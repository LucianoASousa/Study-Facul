#include <stdio.h>
#define LENGTH 20

/**
  Escrever um programa que leia duas matrizes (denominadas A e B) do tipo vetor com
  20 elementos reais. Construir uma matriz C, sendo cada elemento da matriz C a subtração de
  um elemento correspondente da matriz A com um elemento correspondente da matriz B, ou
  seja, a operação de processamento deve estar baseada na operação C[I] = A[I] - B[1]. Ao final,
  apresentar os elementos da matriz C.
 */

int main()
{
  int A[LENGTH];
  int B[LENGTH];
  int C[LENGTH];

  for (int i = 0; i < LENGTH; i++)
  {
    printf("Digite o %d° número: da 1° matriz: ", i + 1);
    scanf("%d", &A[i]);
    printf("Digite o %d° número: da 2° matriz: ", i + 1);
    scanf("%d", &B[i]);
  }

  for (int i = 0; i < LENGTH; i++)
  {
    C[i] = A[i] - B[i];
    printf("%d - %d = %d \n", A[i], B[i], C[i]);
  }

  return 0;
}