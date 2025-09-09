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
    for (int i=1;i<n;i++){
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
int length(struct Node *p){
    int len;
    while(p){
     len++;
     p=p->next;
    }
    return len;
}

void delete_node(struct Node *p,int pos){
     struct Node *temp;
     
     if(pos<1 || pos> length(p) ){
        return  ;
     }
    if(pos==0){
        first=first->next;
        if(first)first->prev=NULL;
        free(p);
    }
    else {
    while(pos){
        temp = p;
        p=p->next;
        pos--;
    }
    temp->next = p->next;
    if(p->next) p->next->prev = temp;
    free(p);
    }

}
int main()
{
int A[]={10,20,30,40,50};
create(A,5);
delete_node(first,4);
display(first);
}