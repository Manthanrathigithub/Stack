#include <iostream>
#include <queue>
#include <stack>
#include <cstdint>
using namespace std;

struct Node
{
    int data;
    Node *lchild;
    Node *rchild;
};

class Tree
{
    Node *root;

public:
    Tree() { root = NULL; }

    void CreateTree();
    void Preorder() { Preorder(root); }
    void Inorder() { Inorder(root); }
    void Postorder() { Postorder(root); }
    void Levelorder() { Levelorder(root); }
    void It_preorder() { It_preorder(root); }
    int Height() { return Height(root); }
    void It_Inorder() { It_Inorder(root); }
    void It_Postorder() { It_Postorder(root); }
    void It_Levelorder() { Levelorder(root); }
    int Count_Nodes() { return Count_Nodes(root); }
    int Height_child() { return Height_child(root); }

private:
    void Preorder(Node *p);
    void Inorder(Node *p);
    void Postorder(Node *p);
    void Levelorder(Node *p);
    void It_preorder(Node *p);
    void It_Inorder(Node *p);
    int Height(Node *root);
    void It_Postorder(Node *p);
    void It_Levelorder(Node *p);
    int Count_Nodes(Node *root);
    int Height_child(Node *root);
};

void Tree::CreateTree()
{
    Node *p;
    int x;
    queue<Node *> q;

    cout << "Enter root value: ";
    cin >> x;

    root = new Node;
    root->data = x;
    root->lchild = root->rchild = NULL;
    q.push(root);

    while (!q.empty())
    {
        p = q.front();
        q.pop();

        cout << "Enter left child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1)
        {
            Node *t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            q.push(t);
        }

        cout << "Enter right child of " << p->data << " (-1 for no child): ";
        cin >> x;
        if (x != -1)
        {
            Node *t = new Node;
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            q.push(t);
        }
    }
}

void Tree::Preorder(Node *p)
{
    if (p)
    {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Inorder(Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        cout << p->data << " ";
        Inorder(p->rchild);
    }
}

void Tree::Postorder(Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        cout << p->data << " ";
    }
}

void Tree::Levelorder(Node *root)
{
    if (!root)
        return;

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->data << " ";

        if (temp->lchild)
            q.push(temp->lchild);
        if (temp->rchild)
            q.push(temp->rchild);
    }
}

int Tree::Height(Node *root)
{
    if (!root)
        return 0;
    int leftHeight = Height(root->lchild);
    int rightHeight = Height(root->rchild);
    return max(leftHeight, rightHeight) + 1;
}

void Tree::It_preorder(Node *p)
{
    stack<Node *> s;
    while (p != nullptr || !s.empty())
    {
        if (p)
        {
            cout << p->data << " ";
            s.push(p);
            p = p->lchild;
        }
        else
        {
            p = s.top();
            s.pop();
            p = p->rchild;
        }
    }
}

void Tree::It_Inorder(Node *p)
{
    stack<Node *> s;
    while (p != NULL || !s.empty())
    {
        if (p)
        {
            s.push(p);
            p = p->lchild;
        }
        else
        {
            p = s.top();
            s.pop();
            cout << p->data << " ";
            p = p->rchild;
        }
    }
}
void Tree::It_Postorder(Node *p)
{
    stack<intptr_t> s;
    while (p || !s.empty())
    {
        while (p)
        {
            s.push(reinterpret_cast<intptr_t>(p));      // real node
            s.push(reinterpret_cast<intptr_t>(p) * -1); // marker
            p = p->lchild;
        }

        intptr_t temp = s.top();
        s.pop();

        if (temp < 0)
        {
            // This is the marker
            p = reinterpret_cast<Node *>(-temp);
            // Now process right subtree
            p = p->rchild;
        }
        else
        {
            // Second time we see this node => process it
            Node *node = reinterpret_cast<Node *>(temp);
            cout << node->data << " ";
            p = nullptr; // Don't revisit
        }
    }
}
void Tree::It_Levelorder(Node *p)
{
    queue<Node *> q;
    q.push(p);
    while (!q.empty())
    {
        Node *node = q.front();
        q.pop();
        if (p->lchild)
        {
            cout << p->lchild->data << " ";
            q.push(p->lchild);
        }
        if (p->rchild)
        {
            cout << p->rchild->data << " ";
            q.push(p->rchild);
        }
    }
}

int Tree::Count_Nodes(Node *root)
{
    if (root)
    {
        return Count_Nodes(root->lchild) + Count_Nodes(root->rchild) + 1;
    }
    return 0;
}
int Tree::Height_child(Node *root)
{
    int x = 0;
    int y = 0;
    if (root)
    {
        x = Height_child(root->lchild);
        y = Height_child(root->rchild);
        if (x > y)
            return x + 1;
        else
        {
            return y + 1;
        }
    }
    return 0;
}
int main()
{
    Tree t;
    t.CreateTree();
    cout << "Preorder Traversal: ";
    t.Preorder();
    cout << "\nInorder Traversal: ";
    t.Inorder();
    cout << "\nPostorder Traversal: ";
    t.Postorder();
    cout << "\nLevelorder Traversal: ";
    t.Levelorder();
    cout << "\nHeight of Tree: " << t.Height() << endl;

    cout << "\n Iterative Preorder" << endl;
    t.It_preorder();
    cout << "\n Iterative Inorder" << endl;
    t.It_Inorder();
    cout << "\n Iterative Postorder " << endl;
    t.It_Postorder();
    cout << "\n Iterative Level Order Traversal " << endl;
    t.It_Levelorder();
    cout << "\n Count of Nodes " << endl;
    cout << t.Count_Nodes() << endl;
    cout << "\n Height of Child " << endl;
    cout << t.Height_child() << endl;

    return 0;
}
<