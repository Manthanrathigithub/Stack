#include<iostream>
using namespace std;
/*int main()
{
    int n,j;
    cin>>n;
    int lastduplicate;
    int arr[n]={3,6,8,8,10,12,15,15,15,20};
    for (int i=0;i<n;i++){
    if (arr[i]==arr[i+1] && arr[i]!=lastduplicate){
       cout<<arr[i]<<" ";
       lastduplicate=arr[i];
    }     
    }
}*/
int main()
{
    int n,j=0;
    cin>>n;
    
    int arr[n]={3,6,8,8,10,12,15,15,15,20};
    for (int i=0;i<n-1;i++){
        if (arr[i] ==arr[i+1]){
            j=i+1;
            while (arr[j]==arr[i])j++;
            cout<<arr[i]<<"Is appearing  "<<j-i<<"times"<<endl;
            i=j-1;
        }
    }
}