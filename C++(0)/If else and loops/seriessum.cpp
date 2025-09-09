#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

      int sum=0,a=0,s=0;
    for (int i=1;i<=n;i++){
        if (i%2==0)   a=a+i;
    
    else if (i%2!=0) s=s+i;
    }

    sum=s-a;
    cout<<""<<sum;
    }
