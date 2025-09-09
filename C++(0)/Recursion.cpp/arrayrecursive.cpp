#include<iostream>
using namespace std;
void f(int *arr,int idx,int n){
    if (idx==n) return ;
    cout<<arr[idx]<<"\n";
    f(arr,idx+1,n);
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];

    }
    f(arr,0,n);
}