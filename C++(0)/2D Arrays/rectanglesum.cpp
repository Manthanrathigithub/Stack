#include<iostream>
#include<vector>
using namespace std;
int printsum(vector<vector<int>>&v,int l1,int l2,int r1,int r2){
    int sum=0;
    for (int i=l1;i<=l2;i++){
        for (int j=r1;j<=r2;j++){
            sum = sum + v[i][j];
        }
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int l1,l2,r1,r2;
    cin>>l1>>l2>>r1>>r2;
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<v[i][j]<<" ";

        }
        cout<<endl;
    }
cout<<printsum(v,l1,l2,r1,r2);

}