#include <iostream>
using namespace std;

struct Node {
    int data;
    int priority;
    Node* next;
};

class PriorityQueue {
private:
    Node* front;

public:
    PriorityQueue() {
        front = nullptr;
    }

    void enqueue(int data, int priority) {
        Node* temp = new Node;
        temp->data = data;
        temp->priority = priority;
        temp->next = nullptr;

        // Insert at front if queue is empty or priority is higher
        if (front == nullptr || priority < front->priority) {
            temp->next = front;
            front = temp;
        } else {
            // Traverse to find the right position
            Node* current = front;
            while (current->next != nullptr && current->next->priority <= priority) {
                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
        }
    }

    void dequeue() {
        if (front == nullptr) {
            cout << "Priority Queue is empty\n";
            return;
        }
        Node* temp = front;
        front = front->next;
        cout << "Dequeued element: " << temp->data << " (Priority: " << temp->priority << ")\n";
        delete temp;
    }

    void display() {
        if (front == nullptr) {
            cout << "Priority Queue is empty\n";
            return;
        }
        Node* temp = front;
        cout << "Queue contents:\n";
        while (temp != nullptr) {
            cout << "Data: " << temp->data << ", Priority: " << temp->priority << endl;
            temp = temp->next;
        }
    }

    ~PriorityQueue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(30, 3);
    pq.enqueue(10, 1);
    pq.enqueue(20, 2);
    pq.enqueue(40, 0);

    pq.display();
    pq.dequeue();
    pq.display();

    return 0;
}
