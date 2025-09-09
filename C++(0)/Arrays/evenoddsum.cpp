#include<iostream>
using namespace std;
int main()
{
    int size,esum=0,osum=0;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"Enter"<<i+1<<"element of the array"<<endl;
        cin>>arr[i];
        if (i%2==0){
            esum+=arr[i];
        }
       else 
       osum+=arr[i];
    }
    cout<<"The sum of the even entries is "<<esum;
    cout<<endl<<"The sum of the odd entries is "<<osum;
    
}