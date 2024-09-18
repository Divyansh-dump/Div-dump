#include <stdio.h>
#include <string.h>

#define MAX 5

// Define the structure for the circular queue
struct CircularQueue {
    char items[MAX][100];
    int front, rear;
};

// Initialize the queue
void initQueue(struct CircularQueue* q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is full
int isFull(struct CircularQueue* q) {
    return (q->front == (q->rear + 1) % MAX);
}

// Check if the queue is empty
int isEmpty(struct CircularQueue* q) {
    return (q->front == -1);
}

// Insert an element into the queue
void insertcq(struct CircularQueue* q, char* value) {
    if (isFull(q)) {
        printf("Queue is full\n");
        return;
    }
    if (isEmpty(q)) {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    strcpy(q->items[q->rear], value);
    printf("Inserted %s\n", value);
}

// Delete an element from the queue
void deletecq(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Deleted %s\n", q->items[q->front]);
    if (q->front == q->rear) {
        q->front = q->rear = -1;
    } else {
        q->front = (q->front + 1) % MAX;
    }
}

// Display the elements of the queue
void displaycq(struct CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements:\n");
    int i = q->front;
    while (i != q->rear) {
        printf("%s ", q->items[i]);
        i = (i + 1) % MAX;
    }
    printf("%s\n", q->items[q->rear]);
}

int main() {
    struct CircularQueue q;
    initQueue(&q);
    char x[200];
    int ch;
    int flag =1;

    while (flag) {
        printf("1) Insert Queue\n2) Delete Queue\n3) Display Queue\n4) Exit\nEnter your choice:\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element\n");
                scanf("%s",x);
                insertcq(&q,x);
                break;
            case 2:
                deletecq(&q);
                break;
            case 3:
                displaycq(&q);
                break;
            case 4:
                flag = 0;
                break;
            default:
                printf("Enter valid choice\n");
        }
    }
    return 0;
}
