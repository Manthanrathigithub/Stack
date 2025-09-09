#include<iostream>
using namespace std;
int f(int p,int q){
    if (q==0) return 1;
    return p* f(p,q-1);
}//Time & space complexity----> O(q)
int main()
{
    int p,q;
    cin>>p>>q;
   cout<< f(p,q);
}