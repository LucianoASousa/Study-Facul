#include <stdio.h>
#define LENGTH 20

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