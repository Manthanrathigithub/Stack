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
    for (int i=1;i<5;i++){
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
struct Node *  Lsearch(struct Node *p,int key){
    struct Node *q;
    while (p!=NULL){
        if(p->data==key){
            q->next=p->next;
            p->next=first;
            first=p;
            return p;
        }
        q=p;
            p=p->next;
        
      
    }
      return NULL;

}
struct Node *Rsearch(struct Node *p,int key){
    if (p==NULL){
        return NULL;
    }
    if (key==p->data) return p;
    return Rsearch(p->next,key);
}
int main()
{
   struct Node *temp,*l;
   int A[]={1,3,5,7,9,11};
   create(A,6);
   temp=Lsearch(first,5);
   if (temp){
    cout<<"Key found "<<temp->data;
   }
   else cout<<"Key not found";
   cout<<endl;
   display(first);
   l=Rsearch(first,3);

   if (l){
    cout<<"Key found "<<l->data;
   }
   else cout<<"Key not found";
}

