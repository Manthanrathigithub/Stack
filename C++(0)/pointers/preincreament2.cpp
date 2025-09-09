#include<iostream>
using namespace std;
int main()
{
    int arr[2]={7,18};
    int *ptr=&arr[0];
    cout<<*ptr<<" "<<ptr<<"\n";
    cout<<++*ptr<<endl;
    cout<<arr[0]<<" "<<arr[1];
}