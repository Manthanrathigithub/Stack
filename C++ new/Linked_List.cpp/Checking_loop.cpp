#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first=NULL;
void create(int A[],int n){
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}
void display(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
bool ISLOOP(struct Node *f){
    Node *p,*q;
    p=q=f;
    do{
        p=p->next;
        q=q->next;
        q=q?q->next:q;// Checking q is not null
    }
        while(p&&q and p!=q);
        if(p==q) return true;
        else return false;
    
}
int main()
{
    int A[]={10,30,30,40,50};
    create(A,5);
    struct Node *t1,*t2;
  //  t1=first->next->next->next;
    //t2=first->next->next->next->next;
    t2->next=t1;
    bool Result=ISLOOP(first);
    if(Result){
        cout<<"Loop";
    }
    else {
        cout<<"Not a loop";
    }
    
}

