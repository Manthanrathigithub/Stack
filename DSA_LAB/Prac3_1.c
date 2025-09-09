#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
} *top = NULL;

void push(int x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    if (t == NULL)
    {
        printf("Stack is full\n");
    }
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}
int pop()
{
    int x = -1;
    if (top == NULL)
    {
        printf("Stack is empty\n");
        return x;
    }
    else
    {
        x = top->data;
        top = top->next;
        return x;
    }
}

void display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}
int Peek()
{
    return top->data;
}

int main()
{

    push(10);
    push(20);
    push(30);
    push(40);
    display(top);
    printf("%d", Peek());
    pop();
    pop();
    pop();

    printf("\n");
    display(top);
}