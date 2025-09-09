#include<iostream>
using namespace std;
int main()
{
     int size,sum=0;
     cout<<"Enter size of array"<<endl;
     cin>>size;
     int array[size];
     for (int i=0;i<size;i++){
           cout<<"Enter elements of the array "<<i+1<<endl;
           cin>>array[i];

     }     
     for (int j=0;j<size;j++){
        sum=sum+array[j];
     }
     cout<<"The suum of the elements of the array is  "<< sum;

    return 0;
}