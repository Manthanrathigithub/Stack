#include<iostream>
using namespace std;
int  f(int *arr,int idx,int n){
    if (idx==n-1) return arr[idx];
    return max(arr[idx],f(arr,idx +1 ,n));
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