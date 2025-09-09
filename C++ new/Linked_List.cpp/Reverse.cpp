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
void reverse1(struct Node *p,int n){
   int *A;
   int i=0;
   A=new int [n];
  while(p!=NULL){
    A[i++]=p->data;
   p= p->next;
  }  
  p=first,i--;
  while(p!=NULL){
    p->data=A[i--];
    p=p->next;
  }// O(n)
  delete[]A;
 
}
void reverse2(struct Node *p){ //USING SLIDING POINTER
   struct Node *r,*q;
   r=NULL;
   q=NULL;
   while(p!=NULL){
    r=q;
    q=p;
    p=p->next;
    q->next=r;

   }
   first=q;
}
void R_Rev(struct Node *q,struct Node *p){
  
  if(p!=NULL) 
  {R_Rev(p,p->next);
  p->next=q;
  }
  else {
    first=q; 
  }

}

int main()
{
int A[]={3,4,7,6,8};
create(A,5);
//reverse1(first,5);
//reverse2(first);
R_Rev(NULL,first);
display(first);
}