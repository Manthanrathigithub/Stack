#include<iostream>
using namespace std;
int fibonacci(int n){
    if (n==0 || n==1 ) return n;
    
    return  fibonacci(n-1) + fibonacci(n-2);
    }
// Space complexity ----> O(n)
// Time complexity ------>O(2^n)
int main()
{
    int n;
    cin>>n;
    int result=fibonacci(n);
    cout<<result;
}