#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>
#include <stdlib.h>

// Node structure for binary trees
struct Node {
    struct Node *lchild;
    int data;
    struct Node *rchild;
};

// Circular queue for Node* type
struct Queue {
    int front;
    int rear;
    int size;
    struct Node **Q;
};

// Function to create the queue
void create(struct Queue *q,int size) {
   // printf("Enter the size of the Queue: ");
    //scanf("%d", &q->size);
    q->Q = (struct Node **)malloc(size * sizeof(struct Node *));
    q->front = 0;
    q->rear = 0;
    q->size=size;
}

// Enqueue a Node pointer
void enqueue(struct Queue *q, struct Node *x) {
    if ((q->rear + 1) % q->size == q->front) {
        printf("Queue is full\n");
    } else {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

// Dequeue a Node pointer
struct Node *dequeue(struct Queue *q) {
    struct Node *x = NULL;
    if (q->front == q->rear) {
        printf("Queue is empty\n");
    } else {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

// Check if queue is empty
int isEmpty(struct Queue q) {
    return q.front == q.rear;
}

// Display all node data in the queue
void display(struct Queue q) {
    if (q.front == q.rear) {
        printf("Queue is empty\n");
        return;
    }
    int i = (q.front + 1) % q.size;
    do {
        printf("%d ", q.Q[i]->data);
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    printf("\n");
}

#endif // QUEUE_H
