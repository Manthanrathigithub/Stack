#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first;
void create(int A[],int n){
    first=new Node;
    first->data=A[0];
    first->next=NULL;
    struct Node *t,*last;
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
   if (p!=NULL){
         display(p->next);
         cout<<p->data<<" ";

   
   }
}
int main()
{// Time complexity ->O(n)
// No of calls = n+1
int A[]={1,5,7,8,0};
create(A,5);
display(first);
}