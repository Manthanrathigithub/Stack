#include<iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cout<<"Enter a number "<<endl;
    cin>>n;
    for (int i=0;n!=0;i++){
         int ld=n%10;
            reverse=reverse*10+ld;
            n/=10;
            
    }
    cout<<"The reverse of the number is "<<reverse;
}