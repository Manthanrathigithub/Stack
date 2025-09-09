#include<iostream>
using namespace std;
int f(int *arr,int idx,int n){
    if (idx==n-1){
    return arr[idx];
    }
    
   return  arr[idx] + f(arr,idx+1,5);

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
   cout<< f(arr,0,n);
}