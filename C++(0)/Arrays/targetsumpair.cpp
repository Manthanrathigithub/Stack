#include<iostream>
using namespace std;

int main()
{
    int arr[]={-2,-1,0,3,6,8,11,12};
    int target_sum=100;
  bool found=false;

    for (int i=0;i<8;i++){
        for (int j=7;j>=0;j--){
            if (arr[i]+arr[j]==target_sum){
               found=true;
               break;
                
            }
                }
    }
    if (found==true){
        cout<<"Pair found"<<endl;
    }
    else {
        cout<<"Pair not found "<<endl;
    }
    
}

