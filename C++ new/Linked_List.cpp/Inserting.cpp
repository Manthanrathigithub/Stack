#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*first;
void create(int A[],int n){
   struct Node *t,*last;
   first=new Node;
   first->data=A[0];
   first->next=NULL;
   last=first;
   for (int i=1;i<n;i++){
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
int count(struct Node *p){
    int count1=0;
    if(p==NULL) return 0 ;
    return 1 +count( p->next);
}
void Insert(struct Node *p,int pos,int x){
    struct Node *t;
    if (  pos<0 || pos>count(p)){
     return ;
    }
    t=new Node;
    t->data=x;
    if (pos==0){
        t->next=first;
        first=t;
    }
    else {
        for (int i=0;i<pos-1;i++){
            p=p->next;
            
        }
        t->next=p->next;
        p->next=t;
    }
}
int main()
{
int A[]={1,4,5,6,79,98,45,67,89,100};
   create(A,10);
   Insert(first,5,1000);
   display(first);
}