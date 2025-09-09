#include<iostream>
using namespace std;
struct Node {
int data;
struct Node *next;
}*first;
void create(int A[],int n){
  Node *t,*last;
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
bool Check_Sorted(struct Node *p){
    int x=INT16_MIN;
    while(p!=NULL){
        if(x<p->data){
            x=p->data;
           
        }
        else {
            return false;
            
        }
        p=p->next;
       
    }
     return true;
}
int main(){
int A[]={10,40,600,700,0};
create(A,5);
bool result=Check_Sorted(first);
if(result) cout<<"Sorted";
else{
cout<<"Not sorted";
}
}
