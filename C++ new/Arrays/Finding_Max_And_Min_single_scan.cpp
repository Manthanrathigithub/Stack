#include<iostream>
using namespace std;
int main()
{
    int arr[10]={5,8,3,9,6,2,10,7,-1,4};
    int max=INT16_MIN;
    int min=INT16_MAX;
    for (int i=0;i<10;i++){
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];

    }
    cout<<max<<" "<<min;
}