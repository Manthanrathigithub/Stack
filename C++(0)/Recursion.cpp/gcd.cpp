#include<iostream>
using namespace std;
int  gcd(int n,int m){
   if (n==0) return m;
   if (m==0) return n;
   if (n>m) return gcd(n%m,m);
   if (m>n) return gcd(n,m%n);
   }
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<gcd(n,m);
// By euclidean theorem we can state that the gcd
//  of two numbers remains the same if smaller numbeer is subtratcted
// or modulo is took from the larger number
}