#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,3,4,5,6,8,9,10,12,14};
    int left_ptr=0;
    int right_ptr=9;
    int k;cin>>k;
    while (left_ptr<right_ptr){
        if (arr[left_ptr] + arr[right_ptr]>k) right_ptr--;
       
    else if (arr[left_ptr]+arr[right_ptr]<k) left_ptr++;
    else if (arr[left_ptr]+arr[right_ptr]==k){
        cout<<"The pairs are "<<arr[left_ptr]<<"and"<<arr[right_ptr]<<endl;
        left_ptr++;
        right_ptr--;
    }
}
}
