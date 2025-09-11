#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int front;
    int rear;
    int size;
    int *Q;
};
void create(struct Node *q)
{
    printf("Enter size of Queue\n");
    scanf("%d", &q->size);
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void enqueue(struct Node *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queue Overflow\n");
    
    else
    {
        if (q->front == -1)
        q->front = 0;
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int dequeue(struct Node *q)
{
    int x = -1;
    if (q->front == q->rear)
        printf("Queue Underflow\n");
    else
    {
        x = q->Q[q->front];
        q->front++;
    }

    return x;
}
void display(struct Node q)
{
    for (int i = q.front ; i <= q.rear; i++)
        printf("%d ", q.Q[i]);
    printf("\n");
}
int main()
{
    struct Node q;
    create(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    display(q);
    printf("Dequeued: %d\n", dequeue(&q));
    printf("Dequeued: %d\n", dequeue(&q));
    display(q);
    return 0;
}