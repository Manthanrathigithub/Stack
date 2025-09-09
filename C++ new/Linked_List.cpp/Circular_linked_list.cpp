#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*head;
void create(int A[],int n){
    struct Node *t,*last;
    head=new Node;
    head->data=A[0];
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    do {
        cout<<p->data<<" ";
        p=p->next;

    }while(p!=head);
    cout<<endl;
}
int R_display(struct Node *p){
    static int  flag=0;
    while (p!=head || flag==0){
flag=1;
        cout<<p->data<<" ";
        p=p->next;
    }
    flag=0;
}
void Insertion(int x,int pos){
    Node *t,*p;
   
    int i;

    if(pos==0){
        t=new Node;
        t->data=x;
        if(head==NULL){
        head=t;
        head->next=head;
        }
        else {
         p=head;
         while (p->next!=head) {
            p=p->next;
         }
         p->next=t;
         t->next=head;
         head =t;

        }
        
    }
    else {
        p=head;
        for (i=0;i<pos-1;i++){
            p=p->next;
        }
        t=new Node;
        t->data=x;
        t->next=p->next;
        p->next=t;
    }

}
int  delete_Node(struct Node *p,int pos){
    int i,x;
    struct Node *q;
    q=new Node;
    if(pos==1){
      while(p->next!=head){
      p=p->next;}
     x=head->data;
     if (p==head) {
        delete head;
        head=NULL;
     }
     else {
        p->next=head->next;
        delete head;
        head=p->next;
     }

    }
    else {
        for(i=0;i<pos-2;i++){
            p=p->next;

        }
       q=p->next;
       p->next=q->next;
       x=q->data;
       delete q;

       
        
    }
    return x;
}

void reverse (struct Node *p){
    struct Node *q,*r=NULL;
    do{
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }while(p!=head);
    head->next=q;
    head=q;
}
int main()
{
 int A[]={1,2,3,4,5,6};
  create(A,6);
  Insertion(90,5);
  display(head);
  delete_Node(head,5);
  cout<<endl;
  R_display(head);
 
  reverse(head);
  display(head);

}