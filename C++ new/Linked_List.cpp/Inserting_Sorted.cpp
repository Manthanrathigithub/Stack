#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first;
void create(int A[],int n){
    Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<5;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void display(struct Node *p){
  while (p!=NULL){
    cout<<p->data<<" ";
    p=p->next;
  }
}
void Sort_Insert(struct Node *p,int x)
{
  Node *t;
  p=first;
  t=new Node;
  t->data=x;
  t->next=NULL;
  Node *q=NULL;
  if (first==NULL){
    first=t;
  }
  else{
  while (p && p->data <x){
    q=p;
    p=p->next;
  }
  if (p==first){
    t->next=first;
    first=t;}
    else{
  t->next=q->next;
  q->next=t;
  }
  }
  

}
int main(){
int A[]={10,20,30,40,50};
create(A,5);
Sort_Insert(first,5);
display(first);
}