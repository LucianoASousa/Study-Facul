#include <stdio.h>
#include <stdlib.h>

typedef struct SFila{
    int dado;
    struct SFila *next;
    struct SFila *prev;
} TFila;


TFila *primeiro;

TFila *novo;

TFila *ultimo;

TFila *inicial(){
    novo = malloc(sizeof(TFila));
    novo->next = NULL;
    novo->prev = NULL;
    primeiro = novo;
    return novo;
}

TFila *proximos(){
    novo = malloc(sizeof(TFila));

    novo->next = NULL;
    ultimo = primeiro;
    while (ultimo->next != NULL){
        ultimo = ultimo->next;
    }
    ultimo->next = novo; 
    novo->prev = ultimo; 
    return novo;
}

void listar(){
    TFila * ultimo = primeiro;
    printf("\n\nListando\n\n");
    while (ultimo != NULL){
        printf("%d ", ultimo->dado);
        ultimo = ultimo->next;
    }
}

TFila *new (){
    if (primeiro == NULL)
       return inicial();
    else
        return proximos();
}