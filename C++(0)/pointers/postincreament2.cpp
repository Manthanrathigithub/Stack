#include<iostream>
using namespace std;
int main() 
{
    int arr[2]={2,5};
    int *ptr=&arr[0];
    cout<<ptr<<"\n"<<*ptr;
    cout<<"\n"<<(*ptr)++;
    cout<<endl<<arr[0]<<" "<<arr[1];
    cout<<"\n"<<*ptr;
    
}