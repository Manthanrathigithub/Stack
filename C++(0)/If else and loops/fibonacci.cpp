#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of fibonacii term"<<endl;
    cin>>n;
     int first=1,second=1;
     int sum=1;
     for (int i=1;i<n-1;i++){
        sum=first+second;
    first =second;
    second=sum;
       
     }
     cout<<sum;

}