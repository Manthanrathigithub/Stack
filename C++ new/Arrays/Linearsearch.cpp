#include<iostream>
using namespace std;
struct Array {
int A[10];
int size;
};
display(struct Array arr){
    for (int i=0;i<arr.size;i++){
        cout<<arr.A[i]<<" ";
    }
    cout<<endl;

}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
    
    
}
int linearSearch(struct Array *arr,int key){
    for (int i=0;i<arr->size;i++){
    if (arr->A[i]==key){
        swap(arr->A[i],arr->A[i-1]); 
        return i;
    }
   

    }
 return -1;
    }

int main()
{
    struct Array arr={{1,2,4,5},4};
    display(arr);
    cout<<linearSearch(&arr,5);
}