#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the element to be searched on the array"<<endl;
    cin>>n;
    int arr[3]={5,9,6};
    for (int i=0;i<3;i++){
        if (arr[i]==n){
           cout<<"-1";
           break;
        }
        else 
        cout<<i;
    }
       
}
