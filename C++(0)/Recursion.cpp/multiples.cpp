#include<iostream>
using namespace std;
void f(int n,int k){
    if (k<1) return;
    f(n,k-1);
    cout<<n*k<<" ";
}
int main()
{
    int n;
    int k;
    cin>>n>>k;
    f(n,k);
}