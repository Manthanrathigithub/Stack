#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};

Node *root = nullptr;

// ---------------- Insert Iterative ----------------
void Insert(int key)
{
    Node *t = root;
    Node *p, *r = nullptr;

    if (root == nullptr)
    {
        p = new Node;
        p->data = key;
        p->lchild = p->rchild = nullptr;
        root = p;
        return;
    }

    while (t)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return; // key already exists
    }

    p = new Node;
    p->data = key;
    p->lchild = p->rchild = nullptr;

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

// ---------------- Inorder Traversal ----------------
void Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

// ---------------- Search Iterative ----------------
Node *Search(int key)
{
    Node *temp = root;
    while (temp)
    {
        if (temp->data == key)
            return temp;
        else if (key < temp->data)
            temp = temp->lchild;
        else
            temp = temp->rchild;
    }
    return NULL;
}

// ---------------- Recursive Insert ----------------
Node *RInsert(Node *p, int key)
{
    if (!p)
    {
        Node *t = new Node;
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
        p->lchild = RInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = RInsert(p->rchild, key);

    return p;
}

// ---------------- Height ----------------
int Height(Node *p)
{
    if (!p)
        return 0;
    int LH = Height(p->lchild);
    int RH = Height(p->rchild);
    return max(LH, RH) + 1;
}

// ---------------- Inorder Predecessor ----------------
Node *InPre(Node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}

// ---------------- Inorder Successor ----------------
Node *Succ(Node *p)
{
    while (p && p->lchild)
        p = p->lchild;
    return p;
}

// ---------------- Delete Node ----------------
Node *deleteNode(Node *p, int key)
{
    if (p == NULL)
        return NULL;

    // Case 1: Leaf node
    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        delete p;
        return NULL;
    }

    if (key < p->data)
        p->lchild = deleteNode(p->lchild, key);
    else if (key > p->data)
        p->rchild = deleteNode(p->rchild, key);
    else
    {
        // Case 2: Node with only one child
        if (p->lchild == NULL && p->rchild != NULL)
        {
            Node *temp = p->rchild;
            if (p == root) root = temp; // if root is being deleted
            delete p;
            return temp;   // return child to connect parent
        }
        else if (p->rchild == NULL && p->lchild != NULL)
        {
            Node *temp = p->lchild;
            if (p == root) root = temp;
            delete p;
            return temp;
        }

        // Case 3: Node with two children
        if (Height(p->lchild) > Height(p->rchild))
        {
            Node *q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = deleteNode(p->lchild, q->data);
        }
        else
        {
            Node *q = Succ(p->rchild);
            p->data = q->data;
            p->rchild = deleteNode(p->rchild, q->data);
        }
    }
    return p;
}

// ---------------- Main ----------------
int main()
{
    root = RInsert(root, 14);
    RInsert(root, 11);
    RInsert(root, 12);
    RInsert(root, 19);
    RInsert(root, 7);
    RInsert(root, 4);
    RInsert(root, 8);
    RInsert(root, 17);
    RInsert(root, 16);
    RInsert(root, 53);
    RInsert(root, 20);
    RInsert(root, 60);
    


    cout << "Inorder before deletion: ";
    Inorder(root);
    cout << endl;

    deleteNode(root,8); // delete leaf
    cout << "Inorder after deleting 8: ";
    Inorder(root);
    cout << endl;

    deleteNode(root, 7); // delete root
    cout << "Inorder after deleting 7: ";
    Inorder(root);
    cout << endl;

    return 0;
}
