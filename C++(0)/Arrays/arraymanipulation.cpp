#include<iostream>
using namespace std;
int main()
{
     int arr[]={2,3,1,3,2,4,1};
     for (int i=0;i<7;i++){
        for (int j=0;j<i;j++){
            if (arr[i]==arr[j]){
                arr[i]=arr[j]=-1;

            }
        }
        
     }
for (int i=0;i<7;i++){
            if (arr[i]>0){
                cout<<arr[i];
            }
        }
}