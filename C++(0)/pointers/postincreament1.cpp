#include<iostream>
using namespace std;
int main()
{
    int arr[2]={1,4};
    int *ptr=&arr[0];
    cout<<ptr<<endl;
    cout<<*(ptr++)<<endl;
  //right to left
  cout<<arr[0]<<" "<<arr[1]<<"\n";
  cout<<ptr<<" "<<*ptr;
   }