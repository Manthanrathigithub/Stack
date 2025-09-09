#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first;
void disp(struct Node *p){
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void create(int A[],int n){
    Node *last,*t;
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
delete_Node(struct Node *p){
    p=first;
    first=first->next;
    int x=p->data;
    delete p;
    
}
void delete_Node1(struct Node *p,int index){
    p=first;
    struct Node *t=NULL;
    for(int i=0;i<index-1;i++){
        t=p;
        p=p->next;
    }
    t->next=p->next;
    delete p;

}
int main()
{ 
    int A[]={10,20,30,40,50};
    create(A,5);
    delete_Node1(first,3);
    disp(first);

}