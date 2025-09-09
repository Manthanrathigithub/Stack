#include <iostream>
using namespace std;

// Node structure to hold non-zero elements
struct Node {
    int data;
    int col;
    Node* next;
};

// Sparse Matrix class using array of linked lists
class SparseMatrix {
private:
    int rows, cols;
    Node** rowList;

public:
    // Constructor
    SparseMatrix(int r, int c) {
        rows = r;
        cols = c;
        rowList = new Node*[rows];
        for (int i = 0; i < rows; i++) {
            rowList[i] = nullptr;
        }
    }

    // Create sparse matrix from 2D array
    void create(int** A) {
        for (int i = 0; i < rows; i++) {
            Node* head = nullptr;
            Node* last = nullptr;

            for (int j = 0; j < cols; j++) {
                if (A[i][j] != 0) {
                    Node* t = new Node;
                    t->col = j;
                    t->data = A[i][j];
                    t->next = nullptr;

                    if (!head) {
                        head = t;
                        last = t;
                    } else {
                        last->next = t;
                        last = t;
                    }
                }
            }
            rowList[i] = head;
        }
    }

    // Display the sparse matrix
    void display() {
        for (int i = 0; i < rows; i++) {
            cout << "Row " << i << ": ";
            Node* p = rowList[i];
            while (p) {
                cout << "[col: " << p->col << ", val: " << p->data << "] -> ";
                p = p->next;
            }
            cout << "NULL\n";
        }
    }

    // Destructor to free memory
    ~SparseMatrix() {
        for (int i = 0; i < rows; i++) {
            Node* p = rowList[i];
            while (p) {
                Node* temp = p;
                p = p->next;
                delete temp;
            }
        }
        delete[] rowList;
    }
};

// Main function
int main() {
    int r = 4, c = 4;

    // Dynamically allocating 2D array
    int** A = new int*[r];
    A[0] = new int[c]{5, 0, 0, 0};
    A[1] = new int[c]{0, 0, 6, 0};
    A[2] = new int[c]{0, 4, 0, 4};
    A[3] = new int[c]{9, 0, 0, 1};

    // Create and display sparse matrix
    SparseMatrix sm(r, c);
    sm.create(A);
    sm.display();

    // Free 2D array memory
    for (int i = 0; i < r; i++) {
        delete[] A[i];
    }
    delete[] A;

    return 0;
}
