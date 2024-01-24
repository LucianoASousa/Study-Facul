    #include <stdio.h>
    #include <stdlib.h>
    
    struct Element {
        int valor;
    };

    
    void bubbleSort(struct Element *array, int tamanho) {
        int i, j;
        for (i = 0; i < tamanho; i++) {
            for (j = 0; j < tamanho - 1; j++) {
                if (array[j].valor > array[j + 1].valor) {
                    trocar(&array[j], &array[j + 1]);
                }
            }
        }
    }
    void trocar(struct Element *a, struct Element *b) {
        struct Element temp = *a;
        *a = *b;
        *b = temp;
    }
    
    
    int main() {
        int tamanho;
        
        printf("Digite o tamanho do array: ");
        scanf("%d", &tamanho);
        
        struct Element *array = (struct Element *)malloc(tamanho * sizeof(struct Element));
        
        if (array == NULL) {
            printf("Erro de alocação de memória\n");
            return 1;
        }
        
        printf("Digite os elementos do array:\n");
        for (int i = 0; i < tamanho; i++) {
            scanf("%d", &array[i].valor);
        }
    
        bubbleSort(array, tamanho);
    
        printf("Array ordenado:\n");
        for (int i = 0; i < tamanho; i++) {
            printf("%d ", array[i].valor);
        }
        printf("\n");
    
        free(array);
        
        return 0;
    }