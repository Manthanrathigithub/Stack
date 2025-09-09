#include<iostream>
using namespace std;
int main()
{
    /*int arr1[]={1,6,7,10};
    int arr2[]={0,1,3,8,11,12,15,18};
    int m=4;
    int n=8;
*/
  /*  int result[m+n];
     int i=0;
     int j=0;
     int k=0;
     while (i<m && j<n )
        if (arr1[i]>arr2[j]){
            result[k]=arr2[j];
            j++;
            k++;
        }
        else 
        {
            result[k]=arr1[i];
            i++;
            k++;
        }
        while (i<m){
            result[k]=arr1[i];
            i++;
            k++;
        }
        while (j<n){
            result[k]=arr2[j];
            j++;
            k++;
        }
        for (int p=0;p<m+n;p++){
            cout<<result[p]<<" ";
        }
        */
       int arr[]={1,2,3,0,0,0};
       int arr1[]={2,5,6};
       int m=3;
       int n=3;
       // Output ={1,2,2,3,5,6}
       int i=m-1;
       int j=n-1;
       int k=m+n-1;
       while (i>=0 && j>=0){
        if (arr[i] >= arr1[j]){
            arr[k--]= arr[i--];
        }
        else {
            arr[k--]=arr1[j--];
        }
       }
        while (j>=0){
            arr[k--]=arr1[j--];
        }
       
       for (int p=0;p<m+n;p++){
        cout<<arr[p];
       }
}
