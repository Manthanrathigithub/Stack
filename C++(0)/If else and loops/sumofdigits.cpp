#include<iostream>
using namespace std;
int main()
{
   int n,sum=0;
   cout<<"Enter a number "<<endl;
   cin>>n;
   while(n>0){
      sum+=n%10;
      n=n/10;

   }
cout<<"Sum of the digits entered is "<<sum<<endl;
    return 0;
}