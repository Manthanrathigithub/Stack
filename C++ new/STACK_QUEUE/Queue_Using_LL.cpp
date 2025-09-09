#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;
}*front=NULL,*rear=NULL;
void enqueue(int x){
    struct Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Stack is full";
    }
    else {
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front=rear=t;
        }
        else {
            rear->next=t;
            rear=t;
        }
    }
}
int dequeue(){
    int x=-1;
    struct Node *p;
    p=new Node;
    if(front==NULL) {
        cout<<"Queue is empty";
    }
    else {
      x=front->data;
      p=front;
      front=front->next;
      delete(p);
    }
    return x;
}

void display(){
        struct Node *p=front;
        while(p){
            cout<<p->data<<" ";
            p=p->next;
        }
        cout<<"\n";
}

int main()
{
enqueue(10);
enqueue(20);enqueue(30);enqueue(40);enqueue(50);dequeue();
display();

}