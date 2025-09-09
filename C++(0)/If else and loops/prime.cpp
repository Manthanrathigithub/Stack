#include<iostream>
using namespace std;
int main()
    {
   int n;
   cout<<"Enter a number "<<endl;
   cin>>n;
   int a=0;
   for (int i=2;i<n-1;i++){
    if (n%i==0){
        a=1;
        break;
    }
   }
   
    if (n==1){
    cout<<"1 is neither prime nor composite"<<endl;
   }
  else if (a==0){
   cout<<"prime number "<<endl;

   }
   else {
    cout<<"Composite number "<<endl;
   }
   return 0;
    }