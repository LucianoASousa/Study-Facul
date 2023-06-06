#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

typedef struct {
    int start;
    int end;
    int data[MAX_SIZE];
} CircularQueue;

void initQueue(CircularQueue *queue) {
    queue->start = -1;
    queue->end = -1;
}

int isFull(CircularQueue *queue) {
    return (queue->start == 0 && queue->end == MAX_SIZE - 1) || (queue->end == (queue->start - 1) % (MAX_SIZE - 1));
}

int isEmpty(CircularQueue *queue) {
    return queue->start == -1;
}

void enqueue(CircularQueue *queue, int value) {
    if (isFull(queue)) {
        printf("Queue is full\n");
        return;
    }

    if (queue->start == -1) {
        queue->start = 0;
    }

    queue->end = (queue->end + 1) % MAX_SIZE;
    queue->data[queue->end] = value;
}

int search( CircularQueue *queue, int value){
    int i;
    for (i = queue->start; i <= queue->end; i++){
        if (queue->data[i] == value){
            return i;
        }
    }
    return -1;
}

int dequeue(CircularQueue *queue) {
    int value;

    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1;
    }

    value = queue->data[queue->start];

    if (queue->start == queue->end) {
        queue->start = -1;
        queue->end = -1;
    } else {
        queue->start = (queue->start + 1) % MAX_SIZE;
    }

    return value;
}

int main() {
    CircularQueue queue;
    initQueue(&queue);

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("%d\n", search(&queue, 2));

    return 0;
}
