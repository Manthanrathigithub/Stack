#include<iostream>
using namespace std;
int main()
{
    int arr[2]={5,7};
    int *ptr=&arr[0];
    cout<<*ptr<<"\n"<<ptr<<"\n";
    cout<<*++ptr<<endl;
    cout<<arr[0]<<" "<<arr[1]; 
    cout<<ptr;
}