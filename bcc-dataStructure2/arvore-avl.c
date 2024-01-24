
#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *esq, *dir;
    short altura;
}No;

No *novoNo(int x){
    No *novo = malloc(sizeof(No));

    if(novo){
        novo->valor = x;
        novo->esq = NULL;
        novo->dir = NULL;
        novo->altura = 0;
    }else
        printf("\nErro ao alocar nó\n");
    return novo;
}

short maior(short a, short b){
    return (a > b)? a : b;
}

short alturaDoNo(No *no){
    if(no == NULL)
        return -1;
    else
        return no->altura;
}


short fatorDeBalanceamento(No *no){
    if(no)
        return(alturaDoNo(no->esq) - alturaDoNo(no->dir));
    else
        return 0;
}

No *rotacaoEsq(No *r){
    No *y, *f;

    y = r->dir;
    f = y->esq;
    y -> esq = r;
    r -> dir = f;
    r -> altura = maior(alturaDoNo(r->esq), alturaDoNo(r->dir)) + 1;
    y -> altura = maior(alturaDoNo(y->esq), alturaDoNo(y->dir)) + 1;
    
    return y;
}

No *rotacaoDir(No *r){
    No *y, *f;
    y = r->esq;
    f = y->dir;
    y->dir = r;
    r->esq = f;
    r->altura = maior(alturaDoNo(r->esq), alturaDoNo(r->dir)) + 1;
    y->altura = maior(alturaDoNo(y->esq), alturaDoNo(y->dir)) + 1;
    
    return y;
}

No *rotacaoDirEsq(No *r){
    r->dir = rotacaoDir(r->dir);
    return rotacaoEsq(r);
}

No *rotacaoEsqDir(No *r){
    r->esq = rotacaoEsq(r->esq);
    return rotacaoDir(r);
}

No* balancear(No *raiz){
    short fb = fatorDeBalanceamento(raiz);

    if(fb < -1 && fatorDeBalanceamento(raiz->dir) <= 0)
        raiz = rotacaoEsq(raiz);

    else if(fb > 1 && fatorDeBalanceamento(raiz->esq) >= 0)
        raiz = rotacaoDir(raiz);

    else if(fb > 1 && fatorDeBalanceamento(raiz->esq) < 0)
        raiz = rotacaoEsqDir(raiz);

    else if(fb < -1 && fatorDeBalanceamento(raiz -> dir) > 0)
        raiz = rotacaoDirEsq(raiz);
    
    return raiz;
}

No* inserir(No *raiz, int dado){
    if(raiz == NULL){
        return novoNo(dado);
    }else{
        if(dado < raiz->valor)
            raiz->esq = inserir(raiz->esq, dado);
        else if(dado > raiz->valor)
            raiz->dir = inserir(raiz->dir, dado);
        else
            printf("\nInserção não realizada!\nO elemento %d não existe\n", dado);
    }

    raiz->altura = maior(alturaDoNo(raiz->esq), alturaDoNo(raiz->dir))+1;

    raiz = balancear(raiz);
    return raiz;
}



No *remover(No *raiz, int key){
    if(raiz == NULL){
        printf("Valor não encontrado!\n");
        return NULL;
    }else{
        if(raiz->valor == key){
            if(raiz->esq == NULL && raiz->dir == NULL){
                free(raiz);
                printf("Elemento folha removido: %d\n", key);
                return NULL;
            }else{
                if(raiz->esq != NULL && raiz->dir != NULL){
                    No *aux = raiz->esq;
                    while(aux->dir != NULL)
                        aux = aux->dir;
                    raiz->valor = aux->valor;
                    aux->valor = key;
                    printf("Elemento trocado: %d \n", key);
                    raiz -> esq = remover(raiz->esq, key);
                    return raiz;
                }
                else{
                    No *aux;
                    if(raiz->esq != NULL)
                        aux = raiz->esq;
                    else
                        aux = raiz->dir;
                    free(raiz);
                    printf("Elemento com 1 filho removido = %d \n", key);
                    return aux;
                }
            }
        }else{
            if(key < raiz->valor)
                raiz->esq = remover(raiz->esq, key);
            else
                raiz->dir = remover(raiz->dir, key);
    }
    
        raiz -> altura = maior(alturaDoNo(raiz->esq), alturaDoNo(raiz->dir)) + 1;

        raiz = balancear(raiz);

        return raiz;
    }
}

void imprimir(No *raiz, int nivel){
    int i;
    if(raiz){
        imprimir(raiz->dir, nivel + 1);
        printf("\n\n");
        for(i = 0; i < nivel ; i++)
            printf("\t");
        printf("%d", raiz->valor);
        imprimir(raiz->esq, nivel + 1);
    }
}

int main(){
    int opcao, valor;
    No *raiz = NULL;

    do{
        printf("\n\n\t0 - Sair\n\t1 - Inserir\n\t2 - Remover\n\t3 - Imprimir\n\n");
        scanf("%d", &opcao);
        switch(opcao){
            case 0:
                printf("Saindo...");
                break;
            case 1:
                printf("\tDigite o valor a ser inserido: ");
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);
                break;
            case 2:
                printf("\tDigite o valor a ser removido: ");
                scanf("%d", &valor);
                raiz = remover(raiz, valor);
                break;
            case 3:
                imprimir(raiz, 1);
                break;
            default:
                printf("\nOpção inválida!\n");
        }

    }while(opcao !=0);

return 0;
}