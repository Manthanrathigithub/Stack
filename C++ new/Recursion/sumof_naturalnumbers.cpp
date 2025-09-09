#include<iostream>
using namespace std;
int f(int n){
      int sum=0;
    if (n==0) return 0;
     
    sum = n+ f(n-1);
  
 return sum;
}
int main()
{
    int n;
    cin>>n;
    cout<<f(n);
}