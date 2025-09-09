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
   cout<<endl;
    }
    int main()
    {
        int A[]={1,3,5,7,9};
        create(A,5);
        display(first);
    }
