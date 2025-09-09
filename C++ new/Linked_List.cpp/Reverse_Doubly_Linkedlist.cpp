#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *prev;
struct Node *next;
}*first=NULL;
void create(int A[],int n){
    struct Node *t,*last;
    first=new Node;
    first->data=A[0];
    first->next=first->prev=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new Node;
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
void reverse(struct Node *p){
    struct Node *temp;
    while(p){
       temp=p->next;
       p->next=p->prev;
       p->prev=temp;
       p=p->prev;
       if(p!=NULL&&p->next==NULL){
        first=p;
       }
    }
}
int main()
{
int A[]={10,20,30,40,50};
create(A,5);
reverse(first);
display(first);
}