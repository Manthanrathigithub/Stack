#include<iostream>
#include<vector>
using namespace std;
int main()
{
      int arr[]={-4,-3,-1,0,2,10};
       int n=6;
       int i=0;
       int j=5;
       int k=5;
       int result[n];
       while (i<=j and k>=0){
        if (abs(arr[i])>abs(arr[j])){
            result[k]=arr[i]*arr[i];
            k--;
            i++;
        }
        else {
            result[k]=arr[j]*arr[j];
            j--;
            k--;
        }
       for (int l=0;l<n;l++){
        cout<<result[l]<<" ";
       }
       }

}