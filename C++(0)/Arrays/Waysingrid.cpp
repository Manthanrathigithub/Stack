#include<iostream>
using namespace std;
int f(int i,int j,int m,int n){
    if (i==m-1 and j==n-1) return 1;
    if (i>= m or j>=n) return 0;
    return (i+1,j,m,n) + (i,j+1,m,n);
}
int main()
{
    int n,m;
    cin>>n>>m;
  cout<<  f(0,0,m,n);

}