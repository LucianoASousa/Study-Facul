#include <stdio.h>
#include <stdlib.h>
#include "filaDuplamenteEncadeada.h"

#define TAM 5

int vetor[TAM] = {5,4,3,2,1};

void insertionSort(int v[], int tamanho){
	int i, j, temp;
	for (i = 1; i < tamanho; i++){
		temp = v[i];
		j = i - 1;
		while (j >= 0 && v[j] > temp){
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = temp;
	}
}

void insertionSortD(){
	int temp;
	TFila * atual;
	TFila * anterior;
	for (atual = primeiro->next; atual != NULL; atual = atual->next){
		temp = atual->dado;
		anterior = atual->prev;
		while (anterior != NULL && anterior->dado > temp){
			anterior->next->dado = anterior->dado;
			anterior = anterior->prev;
		}
		if (anterior == NULL)
			primeiro->dado = temp;
		else
			anterior->next->dado = temp;
	}
}




int main(){

	TFila * novo;
	novo = new();
	novo->dado = 5;
	

	novo = new();
	novo->dado = 4;

	novo = new();
	novo->dado = 6;

	novo = new();
	novo->dado = 4;

	novo = new();
	novo->dado = 3;


	listar();
	insertionSortD();
	listar();

	return 0;
}