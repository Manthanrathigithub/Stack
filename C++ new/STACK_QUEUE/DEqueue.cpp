#include <iostream>
using namespace std;

struct DEqueue {
    int size;
    int *S;
    int front;
    int rear;
};

void create(struct DEqueue *D) {
    cout << "Enter the size of the DEQueue: ";
    cin >> D->size;
    D->S = new int[D->size];
    D->front = -1;
    D->rear = -1;
}

void insert_rear(struct DEqueue *D, int x) {
    if (D->rear == D->size - 1) {
        cout << "Queue is full at rear\n";
    } else {
        D->S[++D->rear] = x;
    }
}

void insert_front(struct DEqueue *D, int x) {
    if (D->front == -1) {
        cout << "No space at front\n";
    } else {
        D->S[D->front--] = x;
    }
}

int delete_rear(struct DEqueue *D) {
    int x = -1;
    if (D->front == D->rear) {
        cout << "Queue is empty\n";
    } else {
        x = D->S[D->rear--];
    }
    return x;
}

int delete_front(struct DEqueue *D) {
    int x = -1;
    if (D->front == D->rear) {
        cout << "Queue is empty\n";
    } else {
        x = D->S[++D->front];
    }
    return x;
}

void display(struct DEqueue D) {
    if (D.front == D.rear) {
        cout << "Queue is empty\n";
        return;
    }
    for (int i = D.front + 1; i <= D.rear; i++) {
        cout << D.S[i] << " ";
    }
    cout << endl;
}

int main() {
    struct DEqueue D;
    create(&D);
    insert_rear(&D, 10);
    insert_rear(&D, 20);
    insert_rear(&D, 30);
    insert_rear(&D, 40);
    
   // delete_front(&D);     // 10 removed
    insert_front(&D, 70); // Now front inserts 70

    display(D); // should print: 70 20 30 40

    return 0;
}
 