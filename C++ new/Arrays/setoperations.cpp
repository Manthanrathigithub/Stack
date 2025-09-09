#include<iostream>
using namespace std;
struct Array {
int A[10];
int length;
int size;
};  

struct Array *Union(struct Array *arr,struct Array *arr1){
    int i=0,j=0,k=0;
    struct Array *arr2=new Array;
    while (i<arr->length && j<arr1->length){
        if (arr->A[i]>arr1->A[j]){
            arr2->A[k++]=arr1->A[j++];
        }
        else if (arr->A[i]<arr1->A[j]){
            arr2->A[k++]=arr->A[i++];
        }
        else {
            arr2->A[k++]=arr->A[i++];
            j++;
        }

    }
    arr2->length=k;
    arr2->size=20;
return arr2;
}
struct Array *Intersection(struct Array *arr,struct Array *arr1){
    struct Array *arr2=new Array;
    arr2->length=20;
    int i=0;
    int j=0;
    int k=0;
    while (i<arr->length && j<arr1->length){
        if (arr->A[i]>arr1->A[j]){
          j++;
        }
         else if (arr->A[i]<arr1->A[j]){
          i++;
        }
        if (arr->A[i]==arr1->A[j]){
            arr2->A[k++]=arr->A[i++];
            j++;
        }
    }
    arr2->length=k;
    arr2->size=20;
    return arr2;
}
int main()
{
struct Array arr={{2,5,8,10,12},5,10};
struct Array arr1={{3,4,7,10,12},5,10};
struct Array *arr2;
arr2=Union(&arr,&arr1);
arr2=Intersection(&arr,&arr1);
 
cout<<endl;
for (int i=0;i<arr2->length;i++ ){
    cout<<arr2->A[i]<<" ";
}
}