#include <iostream>
using namespace std;

struct Queue {
    int *Q;
    int size;
    int front;
    int rear;
};

void enqueue(struct Queue *q, int x) {
    if ((q->rear + 1) % q->size == q->front) {
        cout << "Queue is full\n";
    } else {
        q->rear = (q->rear + 1) % q->size;
        q->Q[q->rear] = x;
    }
}

int dequeue(struct Queue *q) {
    int x = -1;
    if (q->front == q->rear) {
        cout << "Queue is empty\n";
    } else {
        q->front = (q->front + 1) % q->size;
        x = q->Q[q->front];
    }
    return x;
}

void display(struct Queue q) {
    int i = (q.front + 1) % q.size;
    do {
        cout << q.Q[i] << " ";
        i = (i + 1) % q.size;
    } while (i != (q.rear + 1) % q.size);
    cout << "\n";
}

int main() {
    struct Queue q;
    cout << "Enter the size of queue: ";
    cin >> q.size;
    q.size++; // For circular queue, we need one extra space
    q.Q = new int[q.size];
    q.front = q.rear = 0;

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    display(q);

    cout << "Dequeued: " << dequeue(&q) << endl;
    display(q);

    delete[] q.Q; // Freeing dynamically allocated memory
    return 0;
}
