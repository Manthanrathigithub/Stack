#include<iostream>
using namespace std;
int main()
{ 
     int n,r=0;
     cout<<"Enter a decimal number"<<endl;
     cin>>n;
     int pow=1;
     while (n>0){

        int ld=n%2;
        r+=ld*pow;
        pow*=10;
        n/=2;
             }
             cout<<r;

    return 0;
}