#include<iostream>
using namespace std;
void TOH(int n,int A,int B,int C){
    if (n<=0) return;
    TOH(n-1,A,C,B);
    cout<<"From "<<A<<"to"<<C<<endl;
    TOH(n-1,B,A,C);
    
}// O(2^n)
int main()
{
    TOH(4,1,2,3);

    return 0;
}