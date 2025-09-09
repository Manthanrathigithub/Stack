#include<iostream>
using namespace std;
struct Stack{
int size;
int *S;
int top;
};
void create(struct Stack *st){
    cout<<"Enter size of stack "<<endl;
    cin>>st->size;
   st-> S= new int [st->size];
    st->top=-1;
}
void display(struct Stack st){
    for(int i=st.top;i>=0;i--){
        cout<<st.S[i]<<" ";
    }
    cout<<endl;
}
 void push(struct Stack *st,int x){
    if(st->top==st->size-1){
        cout<<"Stack Overflow"<<endl;
    }
    else {
        st->top++;
        st->S[st->top]=x;

    }
}
int pop(struct Stack *st ){
    int x=-1;
    if(st->top==-1) cout<<"STACK UNDERFLOW";
    else {
        x=st->S[st->top];
        st->top--;
    }
    return x;
}
int peek(struct Stack st,int index){
     int x=-1;
     if(st.top-index +1<0) cout<<"Invalid Index"<<endl;
     else {
        x=st.S[st.top-index+1];

     }
     return x;
}
int is_empty(struct Stack st){
    if(st.top==-1) return 1;
    return 0;
}
int ISFULL(struct Stack st){
   return st.top==st.size-1;
}
int main()
{
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,20);
    push(&st,30);
    push(&st,40);
    push(&st,50);
    display(st);
cout<<peek(st,5);
}