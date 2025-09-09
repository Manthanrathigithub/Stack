#include<iostream>
using namespace std;
struct Node{
    char data;
    struct Node *next;
}*top=NULL;

void push(char x){
    struct Node *t;
    t=new Node;
    if(t==NULL){
        cout<<"Stack is overflow"<<endl;
        return;
    }
    else 
    {
        t->data=x;
        t->next=top;
        top=t;
    }
}

char pop(){
    char x=-1;
    struct Node *t;
    t=new Node;
    if(top==NULL){
        cout<<"Stack is underflow"<<endl;
    }
    else{
          t=top;
          x=t->data;
          top=top->next;
          t->next=NULL;
          delete t;

    }
    return x;
}

void display(){
    struct Node *temp;
    
    temp=top;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int isBalanced(char *exp){
    for(int i=0;exp[i]!='\0';i++){
      if(exp[i]=='('){
        push(exp[i]);
      }
      else if(exp[i]==')') {
        if(top==NULL){ cout<<"Stack is empty"; 
            return 0;
        }
        pop();
      }
    }

    if(top==NULL){
        return 1;}
        else{
            return 0;
        }
    }


int main()
{
    char exp[] ="((a+b)*(c-d))";
    cout<<isBalanced(exp);
}