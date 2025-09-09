#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

void createList(int n)
{
    struct Node *newNode, *last;
    int value;

    if (n <= 0)
    {
        printf("Number of nodes must be greater than 0.\n");
        return;
    }

    printf("Enter value  for head node : ");
    scanf("%d", &value);
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = value;
    head->next = NULL;
    last = head;

    for (int i = 2; i <= n; i++)
    {
        printf("Enter data for node %d: ", i);
        scanf("%d", &value);
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;
        last->next = newNode;
        last = newNode;
    }
}

void display(struct Node *p)
{
    if (p == NULL)
    {
        printf("List is empty\n");
        return;
    }
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

void insert(int x, int pos)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = NULL;

    if (pos == 0) // INSERTION BEFORE HEAD NODE6
    {
        temp->next = head;
        head = temp;
    }
    else
    {
        struct Node *t = head;
        for (int i = 0; i < pos - 1 && t != NULL; i++)
        {
            t = t->next;
        }
        if (t == NULL)
        {
            printf("Invalid position\n");
            free(temp);
            return;
        }
        temp->next = t->next;
        t->next = temp;
    }
}

void delete_node(int pos)
{
    struct Node *temp = NULL;
    struct Node *p = head;

    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    if (pos == 0)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    else
    {
        struct Node *prev = NULL;
        for (int i = 0; i < pos && p != NULL; i++)
        {
            prev = p;
            p = p->next;
        }
        if (p == NULL)
        {
            printf("Invalid position\n");
            return;
        }
        prev->next = p->next;
        free(p);
    }
}

void search(struct Node *p, int key)
{
    int pos = 0;
    while (p)
    {
        if (p->data == key)
        {
            printf("Element %d found at position %d\n", key, pos);
            return;
        }
        p = p->next;
        pos++;
    }
    printf("Element %d not found in the list\n", key);
}
void sort_list(struct Node *p)
{
    struct Node *i, *j;
    int temp;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    for (i = head; i->next != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
        {
            if (i->data > j->data)
            {

                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

int middle_element(struct Node *p)
{
    struct Node *slow = head, *fast = head;
    while (fast!= NULL &&fast->next != NULL)
    {

        slow = slow->next;
        fast = fast->next->next;
    }
    return slow->data;
 
}

int main()
{
    int ch, x, pos, n, mid;

    printf("Enter the size of the linked list : ");
    scanf("%d", &n);
    createList(n);

    do
    {
        printf("\n1. Display\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Sorting the linked list\n");
        printf("6. Accessing the middle element\n");
        printf("7. Exit the system\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            display(head);
            break;

        case 2:
            printf("Enter element to insert: ");
            scanf("%d", &x);
            printf("Enter position: ");
            scanf("%d", &pos);
            insert(x, pos);
            break;

        case 3:
            printf("Enter position to delete: ");
            scanf("%d", &pos);
            delete_node(pos);
            break;

        case 4:
            printf("Enter element to search: ");
            scanf("%d", &x);
            search(head, x);
            break;

        case 5:
            sort_list(head);
            display(head);
            break;

        case 6:
            mid = middle_element(head);
            printf("%d", mid);
            break;
        }

    } while (ch != 7);

    return 0;
}
