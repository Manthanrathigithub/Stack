#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *lchild;
    Node *rchild;
    int Height;
} *root = NULL;

int Node_Height(Node *p) {
    int h1 = (p && p->lchild) ? p->lchild->Height : 0;
    int h2 = (p && p->rchild) ? p->rchild->Height : 0;
    return max(h1, h2) + 1;
}

int Balanced_factor(Node *p) {
    int h1 = (p && p->lchild) ? p->lchild->Height : 0;
    int h2 = (p && p->rchild) ? p->rchild->Height : 0;
    return h1 - h2;
}

// Rotations
Node* LL_Rotation(Node *p) {
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;

    p->Height = Node_Height(p);
    pl->Height = Node_Height(pl);

    if (root == p) root = pl;
    return pl;
}

Node* RR_Rotation(Node *p) {
    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;    

    p->Height = Node_Height(p);
    pr->Height = Node_Height(pr);

    if (root == p) root = pr;
    return pr;
}

Node* LR_Rotation(Node *p) {
    Node *pl = p->lchild;
    Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;

    plr->lchild = pl;
    plr->rchild = p;

    pl->Height = Node_Height(pl);
    p->Height = Node_Height(p);
    plr->Height = Node_Height(plr);

    if (root == p) root = plr;
    return plr;
}

Node* RL_Rotation(Node *p) {
    Node *pr = p->rchild;
    Node *prl = pr->lchild;

    p->rchild = prl->lchild;
    pr->lchild = prl->rchild;

    prl->lchild = p;
    prl->rchild = pr;

    p->Height = Node_Height(p);
    pr->Height = Node_Height(pr);
    prl->Height = Node_Height(prl);

    if (root == p) root = prl;
    return prl;
}

// Recursive Insert
Node* R_Insert(Node *p, int x) {
    if (p == NULL) {
        Node *t = new Node;
        t->data = x;
        t->lchild = t->rchild = NULL;
        t->Height = 1;
        return t;
    }

    if (x < p->data) {
        p->lchild = R_Insert(p->lchild, x);
    } else if (x > p->data) {
        p->rchild = R_Insert(p->rchild, x);
    }

    p->Height = Node_Height(p);

    // Balance checking
    if (Balanced_factor(p) == 2 && Balanced_factor(p->lchild) == 1)
        return LL_Rotation(p);
    else if (Balanced_factor(p) == -2 && Balanced_factor(p->rchild) == -1)
        return RR_Rotation(p);
    else if (Balanced_factor(p) == 2 && Balanced_factor(p->lchild) == -1)
        return LR_Rotation(p);
    else if (Balanced_factor(p) == -2 && Balanced_factor(p->rchild) == 1)
        return RL_Rotation(p);

    return p;
}

void Preorder(Node *p) {
    if (p) {
        cout << p->data << " ";
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

int main() {
    root = R_Insert(root, 1);
    root = R_Insert(root, 3);
    root = R_Insert(root, 2);
    root = R_Insert(root, 6);
   // root = R_Insert(root, 15);
    //root = R_Insert(root, 25);

    cout << "Preorder traversal: ";
    Preorder(root);
    cout << endl;
    return 0;
}
