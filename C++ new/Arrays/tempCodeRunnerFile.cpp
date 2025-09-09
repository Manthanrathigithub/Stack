#include<iostream>
using namespace std;
/*int main ()
{
    int k;cin>>k;
    int A[10]={6,3,8,10,16,7,5,2,9,14};
    for (int i=0;i<9;i++){
        for (int j=i+1;j<10;j++){
            if (A[i] + A[j]==k){
                cout<<"The pairs are "<<A[i]<<"and"<<A[j]<<endl;
            }
        }
    }
}*/
int main()
{
    int k;cin>>k;
    int arr[10]={6,3,8,10,16,7,5,2,9,14};
    int H[17]={0};
    for (int i=0;i<10;i++){
        if (H[k-arr[i]]!=0){
            cout<<"%d + %d=%d",arr[i],k-arr[i],k;
        }
        H[arr[i]]++;
    }
}