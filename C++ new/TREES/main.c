#include <stdio.h>
#include "C_queue.h"

struct Node *root = NULL;

void Tree_create()
{
    struct Node *t, *p;
    int x;
    struct Queue q; 
    create(&q, 100);
    printf("Enter the value of root node\n");
    scanf("%d", &x);
    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = x;
    root->lchild = root->rchild = NULL;
    enqueue(&q, root);

    while (!isEmpty(q))
    {
        p = dequeue(&q);
        printf("Enter the value of lchild of %d \n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            enqueue(&q, t);
        }

        printf("Enter the value of rchild of %d \n", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = x;
            t->lchild = t->rchild = NULL;
            p->rchild = t;
            enqueue(&q, t);
        }
    }
}
void Preorder(struct Node *p)
{
    if (p)
    {

        printf("%d ", p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
    
}

void Inorder(struct Node *p)
{
    if (p)
    {
        Inorder(p->lchild);
        printf("%d ", p->data);
        Inorder(p->rchild);
    }
   
}

void Postorder(struct Node *p)
{
    if (p)
    {
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ", p->data);
    }
    
}


int main()
{
    Tree_create();
    printf("Preorder of the tree\n");
    Preorder(root);
    printf("\nInorder of the tree\n");

    Inorder(root);
    printf("\nPostorder of the tree\n");
    Postorder(root);
}
