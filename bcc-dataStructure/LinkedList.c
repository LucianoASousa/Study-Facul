#include <stdio.h>
#include <stdlib.h>

typedef struct SFila{
    int dado;
    struct SFila * next;
} TFila;

void primeiro(int info, TFila** fila){
    (*fila) = malloc(sizeof(TFila));
    (*fila)->dado = info;
    (*fila)->next = NULL;
}

void proximos(int info, TFila** fila){
    TFila * novo = malloc(sizeof(TFila));
    TFila * ultimo;

    novo->dado = info;
    novo->next = NULL;

    ultimo = (*fila);
    while (ultimo->next != NULL){
        ultimo = ultimo->next;
    }

    ultimo->next = novo;
}

void enqueue(int info, TFila** fila){
    if (*fila == NULL)
        primeiro(info, fila);
    else
        proximos(info, fila);
}

void listar(TFila* fila){
    TFila * ultimo;
    printf("\n\nValores da lista\n");
    ultimo = fila;
    while (ultimo != NULL){
        printf("%d\n",ultimo->dado);
        ultimo = ultimo->next;
    }
}

TFila * buscar(int key, TFila* fila){
    TFila * ultimo;
    ultimo = fila;
    while (ultimo != NULL){
        if (ultimo->dado == key)
            return ultimo;
        ultimo = ultimo->next;
    }

    return NULL;
}

void dequeue(TFila** fila){ 
    TFila * destroyer = *fila;
    *fila = (*fila)->next;
    free(destroyer);
}

int main(int argc, char** argv) {
    //Sentinela
    TFila * fila = NULL;

    int leitura;
    int chave, i = 0;
    TFila * posicao;

    while(1){
       printf("Informe o valor: ");
        scanf("%d",&leitura);
        if (leitura == 0)
           break;

        enqueue(leitura, &fila);
    }
    
    listar(fila);
    
    printf("Informe o valor que deseja buscar: ");
    scanf("%d",&chave);

    posicao = buscar( chave, fila);

    if (posicao == NULL){
        printf("Não encontramos nenhum registro para a sua busca\n\n");
    }
    else{
        printf("O valor foi encontrado na posição: %p\n\n", posicao);
    }

    return 0;
}