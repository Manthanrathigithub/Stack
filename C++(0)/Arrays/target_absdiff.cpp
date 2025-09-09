#include<iostream>
using namespace std;
int main()
{
    int arr[]={5,10,15,20,26};
   int n=5;
    int x=150;
    int i=0,j=1;
    bool found=false;
    while (i<n and j<n){
        if (abs(arr[j]-arr[i])<x){
             j++;
        }
        else if (abs(arr[j]-arr[i])>x){
            i++;
        }
        else if (abs(arr[j]-arr[i])==x){
            found=true;
            break;
        }
    }
    if (found == false ){
        cout<<"No pair found"<<endl;
    }
    else {
        cout<<"Pair found"<<endl;
    }
}