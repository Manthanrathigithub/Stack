#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    for(int i=0;i<n;i++){
        for (int j=1;j<m;j++){
            matrix[i][j]=matrix[i][j]+matrix[i][j-1];
        }
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum=0;
    for (int i=l1;i<=l2;i++){
        if (r1!=0){
            sum = sum +  matrix[i][r2] - matrix[i][r1-1];
        }
        else {
            sum = sum + matrix[i][r2];

        }
                 }
        cout<<"Sum"<<sum;
    }

