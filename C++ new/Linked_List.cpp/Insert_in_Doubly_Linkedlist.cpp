#include<iostream>
using namespace std;
struct Node {
    struct Node *next;
    struct Node *prev;
    int data;
}*first=NULL;
void create(int A[],int n){
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node ;
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }

}
void display(struct Node *p){
    while(p){
        cout<<p->data<<" ";
     p=p->next;
    }
    cout<<endl;
}
int Length(struct Node *p){
    int len=0;
    while(p){
        len++;
        p=p->next;
    }
    return len;
}
void Insert(struct Node *p,int x,int pos){
    struct Node *t;
    t=new Node;
    t->data=x;
      

    if(pos==0){
    t->next=first;
    t->prev=NULL;
    first->prev=t;
    first=t;
    }
    else {
        for(int i=0;i<pos-1;i++)
        p=p->next;
    }
        t->prev=p;
        t->next=p->next;
        if(p->next) p->next->prev=t;
        p->next=t;
    }

int main()
{
int A[]={10,20,30,40,50};
create(A,5);
display(first);
Insert(first,100,5);
display(first);
}