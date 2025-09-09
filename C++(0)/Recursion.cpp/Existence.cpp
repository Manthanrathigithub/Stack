#include<iostream>
using namespace std;
bool f(int *arr,int n,int i,int x){
    if (i==n) {
         return false;
    }
   /* if(arr[i]==x){
        return true;
        
    }
    f(arr,n,i+1,x);

       }*/
      return (arr[i]==x || f(arr,n,i+1,x));
}
int main()
{

    int arr[5]={9,6,42,4,24};
    int x=4;
    bool result=f(arr,5,0,x);
    if (result ) cout<<"yes";
    else cout<<"No";
 }