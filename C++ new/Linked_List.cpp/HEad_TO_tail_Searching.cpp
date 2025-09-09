#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first=NULL;
void create(int A[],int n){
    first=new Node;
    struct Node *t,*last;
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
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }

}

struct Node *search(struct Node *p,int key){
    struct Node *q;
    while(p){
        if(p->data==key){
             q->next=p->next;
             p->next=first;
             first=p;
             return p;  
        }
        else {
            q=p;
            p=p->next;
            
        }

    }
    return NULL;
}

int main()
{
int A[7]={1,2,4,5,7,6,8};
create(A,7);
display(first);
struct Node *temp;
temp=search(first,8);
if(temp) cout<<"\n Key found ";
else cout<<"NOt found";

cout<<endl;
display(first);

}