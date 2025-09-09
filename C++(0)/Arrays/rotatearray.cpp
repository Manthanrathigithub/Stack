#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of the array"<<endl;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cout<<"Enter the "<<i+1<<"element of the array"<<endl;
        cin>>arr[i];

    }
    int steps;
    cout<<"Enter the steps in which array has to be rotated "<<endl;
    cin>>steps;
      int brr[size],j=0;
      for (int i=size-steps;i<size;i++){
         brr[j++]=arr[i];

      }
      for (int i=0;i<=steps;i++){
        brr[j++]=arr[i];
      }
       
for (int i=0;i<size;i++){
    cout<<brr[i];
}
}