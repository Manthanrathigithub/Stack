#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*first=NULL;
void create(int A[],int n){
    struct Node *last,*t;
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
int Middle(struct Node *p){
    int x=Length(p);
    if(x%2==0){
        x=x/2;
        while(x!=0){
            p=p->next;
            x--;
        }
        return p->data;
    }
    else {
        x=x/2;
        while(x!=0){
            x--;
            p=p->next;
            
        }
        return p->data;
    }
    }
int Middle_Using_Pointer(struct Node *p){
    struct Node *q;
    q=first;
    while(q!=NULL){
        q=q->next;
        if(q) q=q->next;
        if(q) p=p->next;
    }
    return p->data;
}
int main()
{
int A[]={2,3,4,6,7};
create(A,5);
cout<<Middle(first);
cout<<endl;
cout<<Middle_Using_Pointer(first);
}