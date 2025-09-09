#include<iostream>
using namespace std;
int C(int n,int r){
    if (n==r || r==0) return 1;
    return C(n-1,r-1) + C(n-1,r);
}
int f(int n){
    if(n==0 || n==1) return 1;
    return n*f(n-1);
}
int nCr(int n,int r){
    int num = f(n);
    int den=f(n-r)*f(r);
    return num/den;
}
int main()
{
    cout<<C(5,2)<<endl;


    cout<<nCr(5,2);
}