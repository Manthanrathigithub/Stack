#include<iostream>
using namespace std;
int f(int p,int q){
    if (q==0) return 1;
    if (q%2==0){
           int result=f(p,q/2);
        return result*result;
    }
    else {
        int result= f(p,(q-1)/2);
        return p*result*result;
    }// Time complexity ---> O(logq)
}
int main()
{
    int p,q;
    cin>>p>>q;
    cout<<f(p,q);
}