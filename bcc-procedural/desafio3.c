#include <stdio.h>

/* 5.9 Exercícios de Fixação  Letra --> (q)

Escrever um programa que possibilite calcular a área total em metros de uma residência com os 
cômodos sala, cozinha, banheiro, dois quartos, área de serviço, quintal, garagem, entre outros, 
que podem ser fornecidos ao programa. O programa deve solicitar a entrada do nome, da 
largura e do comprimento de um determinado cômodo. Em seguida, deve apresentar a área do 
cômodo lido e também uma mensagem solicitando ao usuário a confirmação de continuar 
calculando novos cômodos. Caso o usuário responda "NÃO", o programa deve apresentar o 
valor total acumulado da área residencial.
*/

int CasaArea(){
    char nome; 
    int largura, comprimento, area;
    char resposta;
    int total = 0;

    while(resposta != 'N'){
        printf("Digite o nome do cômodo: ");
        scanf("%s", &nome);

        printf("Digite a largura do cômodo: ");
        scanf("%d", &largura);

        printf("Digite o comprimento do cômodo: ");
        scanf("%d", &comprimento);

        area = largura * comprimento;

        printf("Área do cômodo: %d\n", area);
        printf("Deseja continuar calculando? (S/N): ");
        scanf("%s", &resposta);
        total += area;
    }
    printf("Total da área: %d M²\n", total);
}

int main()
{
    CasaArea();
    return 0;
}