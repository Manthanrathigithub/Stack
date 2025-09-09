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
int  count1 ( Node *p){
    int count=0;
   if (p==NULL){
    return 0;
   }

    return 1 +count1(p->next);
}

int main(){
    int A[]={1,3,4,5,6,7};
    create(A,6);
   cout<< count1(first);
}