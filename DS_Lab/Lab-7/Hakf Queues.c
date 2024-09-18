#include <stdio.h>
#include <stdlib.h>

#define N 10 // Size of the array

typedef struct {
    int front, rear;
    int size;
    int *array;
} Queue;

// Function to initialize a queue
void initializeQueue(Queue *q, int size) {
    q->front = q->rear = -1;
    q->size = size;
    q->array = (int *)malloc(size * sizeof(int));
}

// Function to check if the queue is full
int isFull(Queue *q) {
    return (q->rear + 1) % q->size == q->front;
}

// Function to check if the queue is empty
int isEmpty(Queue *q) {
    return q->front == -1;
}

// Function to enqueue an element in the queue
void enqueue(Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue Overflow\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = q->rear = 0;
    } else {
        q->rear = (q->rear + 1) % q->size;
    }
    q->array[q->rear] = data;
    printf("Enqueued %d\n", data);
}

// Function to dequeue an element from the queue
int dequeue(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue Underflow\n");
        return -1;
    }
    int data = q->array[q->front];
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % q->size;
    }
    return data;
}

// Function to display the elements of the queue
void display(Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    int i = q->front;
    while (1) {
        printf("%d ", q->array[i]);
        if (i == q->rear) break;
        i = (i + 1) % q->size;
    }
    printf("\n");
}

int main() {
    Queue queue1, queue2;

    // Initialize the first queue to run from 0 to N/2
    initializeQueue(&queue1, N/2 + 1);

    // Initialize the second queue to run from N/2+1 to N-1
    initializeQueue(&queue2, N/2 + 1);

    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue in Queue 1\n");
        printf("2. Enqueue in Queue 2\n");
        printf("3. Dequeue from Queue 1\n");
        printf("4. Dequeue from Queue 2\n");
        printf("5. Display Queue 1\n");
        printf("6. Display Queue 2\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue in Queue 1: ");
                scanf("%d", &data);
                enqueue(&queue1, data);
                break;
            case 2:
                printf("Enter data to enqueue in Queue 2: ");
                scanf("%d", &data);
                enqueue(&queue2, data);
                break;
            case 3:
                data = dequeue(&queue1);
                if (data != -1) {
                    printf("Dequeued from Queue 1: %d\n", data);
                }
                break;
            case 4:
                data = dequeue(&queue2);
                if (data != -1) {
                    printf("Dequeued from Queue 2: %d\n", data);
                }
                break;
            case 5:
                printf("Queue 1: ");
                display(&queue1);
                break;
            case 6:
                printf("Queue 2: ");
                display(&queue2);
                break;
            case 7:
                free(queue1.array);
                free(queue2.array);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
