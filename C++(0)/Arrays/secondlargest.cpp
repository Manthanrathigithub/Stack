#include<iostream>
using namespace std;
int main()
{
   int max=INT16_MIN;
   int max2=INT16_MIN;
   int size;
   cout<<"Enter the size of the array"<<endl;
   cin>>size;
   int arr[size];
   for (int i=0;i<size;i++){
    cout<<"Enter the "<<i+1<<" element of the array"<<endl;
    cin>>arr[i];
   }
   for (int i=0;i<size;i++){

    if (arr[i]>max) {
      max=arr[i];
    }
   }
   for (int i=0;i<size;i++){
    if (arr[i]>max2 && max!=arr[i]){
      max2=arr[i];

    }
   }
   cout<<"Second largest element of the array is "<<max2;

}