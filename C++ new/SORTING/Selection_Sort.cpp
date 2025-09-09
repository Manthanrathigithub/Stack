#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int n){
    int mini=0;
   for(int i=0;i<n-1;i++){
    mini=i;
    for(int j=i;j<n;j++){
    if(arr[j]<arr[mini]) mini=j;

    }
    int temp=arr[i];
    arr[i]=arr[mini];
    arr[mini]=temp;
   }
}
void Bubble_sort(int arr[],int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]> arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
void Insertion_sort(int A [],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && A[j-1]>A[j]){
            int temp=A[j-1];
            A[j-1]=A[j];
            A[j]=temp;
            j--;
        }
    }
}
int main()
{
int A[]={2,3,6,17,20,4};
Insertion_sort(A,6);
int  n=6;
for(int i=0;i<n;i++){
    cout<<A[i]<<" ";
}
}