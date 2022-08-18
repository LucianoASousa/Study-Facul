#include <stdio.h>
/*
Em uma eleição sindical concorreram ao cargo de presidente três candidatos (representados
pelas variáveis A, B e C). Durante a apuração dos votos foram computados votos nulos e em
branco, além dos votos válidos para cada candidato. Deve ser criado um programa de compu-
tador que faça a leitura da quantidade de votos válidos para cada candidato, além de também ler
a quantidade de votos nulos e em branco.
Ao final o programa deve apresentar o número total de eleitores, considerando votos válidos, nulos e em branco;[x]
o percentual correspondente de votos válidos em relação à quantidade de eleitores;[x]
o percentual correspondente de votos válidos do candidato A em relação à quantidade de eleitores;[x]
o percentual correspondente de votos válidos do candidato B em relação à quantidade de eleitores;[x]
o percentual correspondente de votos válidos do candidato C em relação à quantidade de eleitores;[x]
o percentual correspondente de votos nulos em relação à quantidade de eleitores ;[x]
e por último o percentual correspondente de votos em branco em relação à quantidade de eleitores.[x]
*/

struct Candidato{
    char nome[10];

    int votos;
    float percentual_votos;

}typedef TCandidato;

struct Eleicao {
    
    int nulos; 
    int brancos;
    int nao_validos;
    int validos;


    int numero_eleitores;

    float percentual_brancos;
    float percentual_nulos;
    float percentual_validos;

    TCandidato candidatos[3];

} typedef TEleicao ;

void main(){

    TEleicao eleicao;
    eleicao.numero_eleitores = 0;
    eleicao.nao_validos = 0;
    eleicao.validos = 0;

    for (int i = 0; i < 3; i++){
        printf("Nome do candidato: ");
        scanf("%s", &eleicao.candidatos[i].nome);

        printf("Quantidade de votos: ");
        scanf("%d", &eleicao.candidatos[i].votos);

        eleicao.numero_eleitores += eleicao.candidatos[i].votos;
        eleicao.validos += eleicao.candidatos[i].votos;
    };


    printf("Quantidade de votos brancos: ");
    scanf("%d", &eleicao.brancos);
    eleicao.numero_eleitores += eleicao.brancos;

    printf("Quantidade de votos nulos: ");
    scanf("%d", &eleicao.nulos);
    eleicao.numero_eleitores += eleicao.nulos;


    eleicao.percentual_validos = eleicao.validos * 100 / eleicao.numero_eleitores;
    eleicao.percentual_brancos = eleicao.brancos *100 /eleicao.numero_eleitores;
    eleicao.percentual_nulos = eleicao.nulos *100 /eleicao.numero_eleitores;

    for (int i = 0; i < 3; i++)
    {
        eleicao.candidatos[i].percentual_votos = eleicao.candidatos[i].votos * 100 /eleicao.numero_eleitores;
    };

    printf("\n///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("Nome: %s, Votos: %d, Percentual: %0.2f\n", 
        eleicao.candidatos[i].nome, 
        eleicao.candidatos[i].votos, 
        eleicao.candidatos[i].percentual_votos);
    };
    


    printf("Numero de eleitores: %d\n", eleicao.numero_eleitores);
    printf("Percentual de votos válidos em relação à quantidade de eleitores: %0.2f\n", eleicao.percentual_validos);
    printf("Percentual de votos brancos em relação à quantidade de eleitores: %0.2f\n", eleicao.percentual_brancos);
    printf("Percentual de votos nulos em relação à quantidade de eleitores: %0.2f\n", eleicao.percentual_nulos);

}