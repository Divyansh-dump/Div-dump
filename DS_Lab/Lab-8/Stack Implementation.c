#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct {
    int items[MAX];
    int front, rear;
} Dequeue;

void initDequeue(Dequeue *dq) {
    dq->front = -1;
    dq->rear = -1;
}

int isEmpty(Dequeue *dq) {
    return (dq->front == -1);
}

int isFull(Dequeue *dq) {
    return ((dq->front == 0 && dq->rear == MAX - 1) || (dq->front == dq->rear + 1));
}

void addLeft(Dequeue *dq, int item) {
    if (isFull(dq)) {
        printf("Dequeue is full\n");
        return;
    }
    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->front == 0) {
        dq->front = MAX - 1;
    } else {
        dq->front = dq->front - 1;
    }
    dq->items[dq->front] = item;
}

void addRight(Dequeue *dq, int item) {
    if (isFull(dq)) {
        printf("Dequeue is full\n");
        return;
    }
    if (dq->front == -1) {
        dq->front = 0;
        dq->rear = 0;
    } else if (dq->rear == MAX - 1) {
        dq->rear = 0;
    } else {
        dq->rear = dq->rear + 1;
    }
    dq->items[dq->rear] = item;
}

void deleteLeft(Dequeue *dq) {
    if (isEmpty(dq)) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Deleted item: %d\n", dq->items[dq->front]);
    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->front == MAX - 1) {
        dq->front = 0;
    } else {
        dq->front = dq->front + 1;
    }
}

void deleteRight(Dequeue *dq) {
    if (isEmpty(dq)) {
        printf("Dequeue is empty\n");
        return;
    }
    printf("Deleted item: %d\n", dq->items[dq->rear]);
    if (dq->front == dq->rear) {
        dq->front = -1;
        dq->rear = -1;
    } else if (dq->rear == 0) {
        dq->rear = MAX - 1;
    } else {
        dq->rear = dq->rear - 1;
    }
}

void display(Dequeue *dq) {
    if (isEmpty(dq)) {
        printf("Dequeue is empty\n");
        return;
    }
    int i = dq->front;
    printf("Dequeue elements: ");
    if (dq->front <= dq->rear) {
        while (i <= dq->rear)
            printf("%d ", dq->items[i++]);
    } else {
        while (i <= MAX - 1)
            printf("%d ", dq->items[i++]);
        i = 0;
        while (i <= dq->rear)
            printf("%d ", dq->items[i++]);
    }
    printf("\n");
}

int main() {
    Dequeue dq;
    initDequeue(&dq);
    int choice, item;

    while (1) {
        printf("\n1. Add Left\n2. Add Right\n3. Delete Left\n4. Delete Right\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to add left: ");
                scanf("%d", &item);
                addLeft(&dq, item);
                break;
            case 2:
                printf("Enter the item to add right: ");
                scanf("%d", &item);
                addRight(&dq, item);
                break;
            case 3:
                deleteLeft(&dq);
                break;
            case 4:
                deleteRight(&dq);
                break;
            case 5:
                display(&dq);
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
