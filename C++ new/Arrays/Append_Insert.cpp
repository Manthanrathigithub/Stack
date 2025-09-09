#include<iostream>
using namespace std;
struct Array {
    int A[20];
    int length;
    int size;
};
void display(struct Array a){
    for (int i=0;i<a.length;i++){
        cout<<a.A[i]<<" ";
    }
    cout<<endl;
}
void append(struct Array *a,int x){
 if (a->length < a->size){
    a->A[a->length++]=x;
 }
    
}
int main()
{
    struct Array a={{1,2,4,5,6,7},10,5};
   
    append(&a,10);
     display(a);
}
