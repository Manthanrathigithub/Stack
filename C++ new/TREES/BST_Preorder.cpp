#include<iostream>
#include<stack>
using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;
    Node(int val) : data(val), left(NULL), right(NULL) {}
}*root = NULL;

Node *construct_BST_from_Preorder(int Pre[], int n) {
    if (n == 0) return NULL;

    root = new Node(Pre[0]);   
    stack<Node *> st;
    st.push(root);

    for (int i = 1; i < n; i++) {
        Node *temp = NULL;

        // Pop until you find the correct parent
        while (!st.empty() && st.top()->data < Pre[i]) {   
            temp = st.top();
            st.pop();
        }

        if (temp == NULL) {
            // Insert as left child
            st.top()->left = new Node(Pre[i]);
            st.push(st.top()->left);
        } else {
            // Insert as right child
            temp->right = new Node(Pre[i]);
            st.push(temp->right);
        }
    }
    return root;
}

void Inorder(Node *p) {
    if (p) {
        Inorder(p->left);
        cout << p->data << " ";
        Inorder(p->right);
    }
}

int main() {
    int preorder[] = {30, 20, 10, 25, 40, 35, 50};
    int n = sizeof(preorder) / sizeof(preorder[0]);

    root = construct_BST_from_Preorder(preorder, n);

    cout << "Inorder Traversal of the BST: ";
    Inorder(root);
    cout << endl;
    return 0;
}
