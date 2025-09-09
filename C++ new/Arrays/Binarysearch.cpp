#include<iostream>
using namespace std;
struct Array {
int A[4];
int size;
};
int binarysearch(struct Array *arr,int key){
    int low=0;
    int high=arr->size-1;
    int mid;
    while (low<=high){
        mid=(high+low)/2;
        if (arr->A[mid]==key){
            return mid;
        }
        else if (arr->A[mid]>key){
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    return -1;
}
int main()
{
    struct Array arr={{2,4,6,8},4};
    cout<<binarysearch(&arr,8);
}