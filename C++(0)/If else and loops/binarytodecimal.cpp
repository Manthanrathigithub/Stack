#include<iostream>
using namespace std;
int main()
{
   int b,pow=1,ans=0;
   cout<<"Enter a binary number "<<endl;
   cin>>b;
   while  (b>0){

    ans+=(b%10)*pow;
    pow*=2;
    b/=10;
   }
cout<<ans;
    return 0;
}