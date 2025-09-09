#include<iostream>
using namespace std;
struct Array{
int A[10];
int length;
};
void Reverse(struct Array *arr){
    int *b;
    int i,j;
    b=new int [10];
    for ( i=arr->length-1 ,j=0;j<arr->length,i>=0;i--,j++){
        b[j] = arr->A[i];
    }
    for (int i=0;i<arr->length;i++){
        arr->A[i]=b[i];
    }
}
void Reverse2(struct Array *arr){
    int i,j;
    for ( i=0,j=arr->length-1;i<j;i++,j--){
        int temp;
        temp=arr->A[i];
        arr->A[i]=arr->A[j];
        arr->A[j]=temp;
    }
}

int main()
{
    struct Array arr={{1,2,45,6,8,4,2,9,3,7},10};
Reverse2(&arr);
for (int i=0;i<arr.length;i++){
    cout<<arr.A[i]<<" ";
}
}