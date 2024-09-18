#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct PriorityQueue {
    Node* front;
} PriorityQueue;

void initQueue(PriorityQueue* pq) {
    pq->front = NULL;
}

int isEmpty(PriorityQueue* pq) {
    return pq->front == NULL;
}

void insert(PriorityQueue* pq, int item) {
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data = item;
    temp->next = NULL;

    if (isEmpty(pq) || pq->front->data > item) {
        temp->next = pq->front;
        pq->front = temp;
    } else {
        Node* current = pq->front;
        while (current->next != NULL && current->next->data <= item) {
            current = current->next;
        }
        temp->next = current->next;
        current->next = temp;
    }
}

void deleteHighestPriority(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty\n");
        return;
    }
    Node* temp = pq->front;
    printf("Deleted item: %d\n", temp->data);
    pq->front = pq->front->next;
    free(temp);
}

void display(PriorityQueue* pq) {
    if (isEmpty(pq)) {
        printf("Priority Queue is empty\n");
        return;
    }
    Node* current = pq->front;
    printf("Priority Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    PriorityQueue pq;
    initQueue(&pq);

    int choice, item;
    while (1) {
        printf("\n1. Insert\n2. Delete Highest Priority\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the item to insert: ");
                scanf("%d", &item);
                insert(&pq, item);
                break;
            case 2:
                deleteHighestPriority(&pq);
                break;
            case 3:
                display(&pq);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
