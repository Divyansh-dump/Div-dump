#include <stdio.h>
#define MAX 3

typedef struct {
    int x[MAX];
    int front;
    int rear;
} queue;

void insertq(queue *q, int value) {
    if (q-> rear == MAX)
        printf("Queue overflow\n");
    else {
        q-> x[++q->rear] = value;
        if(q-> front == -1) {
            q->front = 0;
        }
    }
}

int deleteq(queue *q) {
    int value;
    if(q->front == -1)
        printf("Queue underflow\n");
    else if(q-> front == q->rear) {
        value = q-> x[q->front];
        q-> front = q-> rear = -1;
        return value;
    }
    else
        return q-> x[q-> front++];
}

void displayq (queue q) {
    int i;
    if (q.front == -1 && q.rear == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue is: \n");
        for(i =q.front; i< q.rear; i++)
        {
            printf("%d\n", q.x[i]);
        }
    }
}

int main () {
    queue q;
    q.front = -1;
    q.rear = -1;
    int ch, x, flag =1;
    while (flag)
    {
        printf("1) Insert Queue\n2) Delete Queue\n3) Display Queue\n4) Exit\nEnter your choice:\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element\n");
                scanf("%d", &x);
                insertq(&q,x);
                break;
            case 2:
                x = deleteq(&q);
                printf("Remove %d from the Queue\n", x);
                break;
            case 3:
                displayq(q);
                break; ;
            case 4:
                flag = 0;
                break;
            default:
                printf("Enter valid choice\n");
        }
    }
    return 0;
}
