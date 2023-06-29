#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int data;
  struct Node* next;
  struct Node* prev;
} Node;

typedef struct List {
  Node* head;
  Node* tail;
} List;

void init(List* list) {
  list->head = NULL;
  list->tail = NULL;
}

void insert(List* list, int data) {
  Node* node = (Node*)malloc(sizeof(Node));
  node->data = data;
  node->next = NULL;
  node->prev = NULL;

  if (list->head == NULL) {
      list->head = node;
      list->tail = node;
  } else {
      list->tail->next = node;
      node->prev = list->tail;
      list->tail = node;
  }
}

void print(List* list) {
  Node* node = list->head;
  printf("\nThe list:\n\n");
  while (node != NULL) {
      printf("%d\n ", node->data);
      node = node->next;
  }
  printf("\n");
}

void printReverse(List* list) {
  Node* node = list->tail;
  printf("\nThe list:\n\n");
  while (node != NULL) {
      printf("%d\n", node->data);
      node = node->prev;
  }
  printf("\n");
}

void searchItem(List* list, int data) {
  Node* node = list->head;
  while (node != NULL) {
    if (node->data == data) {
        printf("\nItem %d encontrado no endereço %p\n\n", data, node);
        return;
    }
    node = node->next;
  }
  printf("\nItem %d não encontrado\n\n", data);
}

void removeItem(List* list, int data) {
  Node* node = list->head;
  while (node != NULL) {
    if (node->data == data) {
        if (node->prev == NULL) {
            list->head = node->next;
            list->head->prev = NULL;
        } else if (node->next == NULL) {
            list->tail = node->prev;
            list->tail->next = NULL;
        } else {
            node->prev->next = node->next;
            node->next->prev = node->prev;
        }
        free(node);
        break;
    }
    node = node->next;
  }
}

int main() {
  List list;
  init(&list);
  int option;

  do {
      printf("1. Inserir\n");
      printf("2. Imprimir\n");
      printf("3. Imprimir reverso\n");
      printf("4. Remover\n");
      printf("5. Buscar\n");
      printf("0. Sair\n");
      scanf("%d", &option);

      switch (option) {
        case 1:
          printf("Digite o valor: ");
          int value;
          scanf("%d", &value);
          insert(&list, value);
          break;
        case 2:
          print(&list);
          break;
        case 3:
          printReverse(&list);
          break;
        case 4:
          printf("Digite o valor: ");
          int value2;
          scanf("%d", &value2);
          removeItem(&list, value2);
          break;
        case 5:
          printf("Digite o valor: ");
          int value3;
          scanf("%d", &value3);
          searchItem(&list, value3);
          break;
      }
  } while (option != 0);

return 0;
}