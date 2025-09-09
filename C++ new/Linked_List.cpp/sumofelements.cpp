#include<iostream>
using namespace std;
struct Node{
int data;
struct Node *next;
}*first;
void create(int A[],int n){
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    struct Node *last,*t;
    last=first;
    for (int i=1;i<n;i++){
        t=new Node;
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}
int  ADD(struct Node *p){
    int sum=0;
    while (p!=NULL){
        sum=sum + p->data;
      p=p->next;
    }
    return sum;
}
int RADD(struct Node *p){
    
    if (p==NULL) return 0;
    
    return RADD(p->next)+ p->data;
}

int main(){
int A[]={1,3,5,7,9};
create(A,5);
cout<<ADD(first)<<endl;
cout<<RADD(first)<<endl;
}