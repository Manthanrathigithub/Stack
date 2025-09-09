#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cout<<endl;
    while(t--){
        int minm=9;
    int n;
    cin>>n;
    while (n>0){
        minm=min(minm,n%10);
        n=n/10;
    }
    cout<<minm<<endl;
}
}