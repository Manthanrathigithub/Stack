#include<iostream>
#include<limits>
using namespace std;
int main()
{
      int size;
      int max=INT8_MIN;
      
         cout<<"Enter size of the array"<<endl;
      
         cin>>size;
 int arr[size];
         for (int i=0;i<size;i++){
           cout<<"Enter "<<i+1 <<" "<<"element of the array"<<endl;
           cin>>arr[i];            
         }
         for (int j=0;j<size;j++){
            if (arr[j]>max){
                max=arr[j];
            if (arr[j]<arr[j+1]){
            max=arr[j+1];
            }
            }
         } 

cout<<"Max elements of the array is "<<max;

}