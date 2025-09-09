#include <iostream>
using namespace std;

struct DEqueue
{
    int size;
    int *S;
    int front;
    int rear;
};

void create(struct DEqueue *q)
{
    cout << "Enter the size of the DEqueue: ";
    cin >> q->size;
    q->S = new int[q->size];
    q->front = -1;
    q->rear = -1;
}

bool ISfull(struct DEqueue *D)
{
    return (D->front == 0 && D->rear == D->size - 1) || (D->front == D->rear + 1);
}

bool IsEmpty(struct DEqueue *D)
{
    return D->front == -1;
}

void insert_rear(struct DEqueue *D, int x)
{
    if (ISfull(D))
    {
        cout << "Queue is full at rear\n";
        return;
    }
    else if (IsEmpty(D))
    {
        D->front = D->rear = 0;
    }
    else
    {
        D->rear = (D->rear + 1) % D->size;
    }
    D->S[D->rear] = x;
}

void insert_front(struct DEqueue *D, int x)
{
    if (ISfull(D))
    {
        cout << "Queue is full at front\n";
        return;
    }
    else if (IsEmpty(D))
    {
        D->front = D->rear = 0;
    }
    else
    {
        D->front = (D->front - 1 + D->size) % D->size;
    }
    D->S[D->front] = x;
}

int delete_front(struct DEqueue *D)
{
    if (IsEmpty(D))
    {
        cout << "Queue is empty\n";
        return -1;
    }
    int x = D->S[D->front];
    if (D->front == D->rear)
    {
        D->front = D->rear = -1;
    }
    else
    {
        D->front = (D->front + 1) % D->size;
    }
    return x;
}

int delete_rear(struct DEqueue *D)
{
    if (IsEmpty(D))
    {
        cout << "Queue is empty\n";
        return -1;
    }
    int x = D->S[D->rear];
    if (D->front == D->rear)
    {
        D->front = D->rear = -1;
    }
    else
    {
        D->rear = (D->rear - 1 + D->size) % D->size;
    }
    return x;
}

void display(struct DEqueue *D)
{
    if (IsEmpty(D))
    {
        cout << "Queue is empty\n";
        return;
    }
    int i = D->front;
    while (true)
    {
        cout << D->S[i] << " ";
        if (i == D->rear)
            break;
        i = (i + 1) % D->size;
    }
    cout << endl;
}

int main()
{
    struct DEqueue D;
    create(&D);

    insert_front(&D, 10);
    insert_rear(&D, 40);
    insert_rear(&D, 20);
    insert_front(&D, 70);

    display(&D);

    delete_front(&D);
    delete_rear(&D);

    display(&D);

    return 0;
}
