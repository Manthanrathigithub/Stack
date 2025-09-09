#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first=NULL,*second=NULL,*third=NULL;
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
void create2(int A[],int n){
    struct Node *t,*last;
    second=new Node;
    second->data=A[0];
    second->next=NULL;
    last=second;
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
void concatenation(struct Node *p,struct Node *q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
          
    }
  p->next=q;
}
void merge(struct Node *p,struct Node *q){
    struct Node *last=NULL;
    if(p->data < q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else {
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    while(p!=NULL && q!=NULL){
        if(p->data > q->data){
            last->next=q;
            last=q;
          q=  q->next;
          last->next=NULL;
        }
        else {
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }

    }
    if(p!=NULL) last->next=p;
    else last->next=q;

}
int main()
{
int A[]={20,40,60,100};
int B[]={10,30,35,90,287,345};
create(A,4);
create2(B,6);
cout<<"First "<<endl;
display(first);
cout<<endl<<"Second"<<endl;
display(second);
//cout<<endl<<"Concatenated"<<endl;
//concatenation(first,second);
//display(third);
cout<<endl<<"Merged list"<<endl;
merge(first,second);
display(third);
}