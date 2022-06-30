#include <stdio.h>
#include <string.h>
int main()
{
    char nome[15];
    char sexo;

    printf("Insira seu nome: ");
    scanf("%s", nome);
    printf("nome inserido: %s\n", nome);
    printf("Insira seu sexo: ");
    scanf("%s", &sexo);

    if (sexo == 'm' || sexo == 'f' || sexo == 'M' || sexo == 'F')
    {
        if (sexo == 'm' || sexo == 'M')
        {
            printf("Illmo. Sr %s", nome);
        }
        if (sexo == 'f' || sexo == 'F')
        {
            printf("Illma. Sra %s", nome);
        }
    }
    else
    {
        printf("Sexo invalido!");
    }
}