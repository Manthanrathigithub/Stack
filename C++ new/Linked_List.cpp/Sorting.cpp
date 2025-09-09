#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;

} *head = NULL;

void create(int n)
{
    head = new Node;
    cout << "Enter the value of the head node of the linked list\n";
    cin >> head->data;
    head->next = NULL;
    Node *t, *last;
    last = head;
    for (int i = 2; i <= n; i++)
    {
        t = new Node;
        cout << "Enter the value of the" << i << " Node of the list\n";
        cin >> t->data;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void Insertion_sort(Node *p){
    struct Node *i,*j,*min;
    for( i=head;i->next!=NULL;i=i->next){
        min = i;
        for(j=i->next;j!=NULL;j=j->next){
            if(j->data < min->data){
                min=j;
            }
        }
        if(min!=i){
            int temp = min->data;
            min->data=i->data;
            i->data=temp;
        }

    }
}
int main()
{
    int n;
    cout<<"Enter the size of the linked list \n";
    cin>>n;
    create(n);
    display(head);
    Insertion_sort(head);
    display(head);
}